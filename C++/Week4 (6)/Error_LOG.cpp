#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>

// Enumeration defining log levels
enum class LEVEL : unsigned char
{
    WARN,
    ERROR
};

// Class representing a log
class LOG
{
public:
    // Sets the log level
    static LOG& Level(LEVEL l);

    // Dumps logs to a file
    static void dump(void);

    // Clears the log vector
    static void Clear(void);

    // Overloaded operator to add log messages
    void operator<<(std::string msg);

private:
    // Map of log levels to their corresponding strings
    static std::unordered_map<LEVEL, std::string> level_map;

    // Current log level
    static std::string log_level;

    // Vector to store log messages
    static std::vector<std::string> log_vector;
};

// Initialize static member variables
std::unordered_map<LEVEL, std::string> LOG::level_map = {
    {LEVEL::WARN, "WARN: "},
    {LEVEL::ERROR, "ERROR: "}
};

std::vector<std::string> LOG::log_vector;
std::string LOG::log_level;

// Sets the log level
LOG& LOG::Level(LEVEL l)
{
    static LOG logBook;
    logBook.log_level = level_map[l];
    return logBook;
}

// Dumps logs to a file
void LOG::dump(void)
{
    std::ofstream LOG_Book;
    LOG_Book.open("/home/abdullah/Scripts/cpp/LOG.csv", std::ios_base::app);

    int records = LOG::log_vector.size();
    int counter = 0;
    while (counter != records)
    {
        LOG_Book << LOG::log_vector.at(counter++) << '\n';
    }

    LOG_Book.close();
}

// Clears the log vector
void LOG::Clear(void)
{
    log_vector.clear();
}

// Overloaded operator to add log messages
void LOG::operator<<(std::string msg)
{
    std::string log = log_level + msg;
    log_vector.push_back(log);
}

int main(int argc, char const *argv[])
{
    // Set log level to WARN and add log messages
    LOG::Level(LEVEL::WARN) << "First Trial";
    LOG::Level(LEVEL::WARN) << "Second Trial";
    
    // Set log level to ERROR and add a log message
    LOG::Level(LEVEL::ERROR) << "Error Trial";

    // Dump logs to a file
    LOG::dump();

    return 0;
}
