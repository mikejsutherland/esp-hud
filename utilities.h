
std::vector<std::string> split(char *data, const char *sep)
{
    std::vector<std::string> v;
    char *token;
    token = strtok(&data[0], sep);
    while (token != NULL)
    {
        v.push_back(token);
        token = strtok(NULL, sep);
    }

    return v;
}
