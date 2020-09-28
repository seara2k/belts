#include <iostream>
#include <map>
#include <vector>

void all_buses(const std::map<std::string, std::vector<std::string>> &bus_stops) {
    if (bus_stops.size() != 0) {
        for (auto item : bus_stops) {
            std::cout << "Bus " << item.first << ":" << " ";
            for (auto c : item.second) {
                std::cout << c << " ";
            }
            std::cout << std::endl;
        }
    } else std::cout << "No buses" << std::endl;
}

void buses_for_stop(const std::map<std::string, std::vector<std::string>> &bus_stops, std::map<int, std::string> &row) {
    std::string stop_input;
    std::cin >> stop_input;
    bool flag = false;
    for (auto thing:row) {
        for (auto item : bus_stops) {
            if (item.first == thing.second) {
                for (auto c : item.second) {
                    if (c == stop_input) {
                        std::cout << item.first << " ";
                        flag = true;
                    }
                }
            }
        }
    }
    if (flag == false) std::cout << "No stop" << std::endl;
    else std::cout << std::endl;
}

void stops_for_bus(std::map<std::string, std::vector<std::string>> &bus_stops, std::map<int, std::string> &row) {
    std::string bus_input;
    std::cin >> bus_input;
    bool flag = false;
    if (bus_stops[bus_input].size() == 0) {
        std::cout << "No bus" << std::endl;
        bus_stops.erase(bus_input);
    } else {
        for (auto c : bus_stops[bus_input]) {
            std::cout << "Stop " << c << ": ";
            for (auto thing:row) {


                for (auto item:bus_stops) {
                    if (thing.second == item.first)

                        for (auto d:item.second) {
                            if ((d == c) && (item.first != bus_input)) {
                                std::cout << item.first << " ";
                                flag = true;
                            }
                        }
                }
            }
            if (flag == false) {
                std::cout << "no interchange";
            }
            flag = false;
            std::cout << std::endl;
        }

    }
}


void new_bus(std::map<std::string, std::vector<std::string>> &bus_stops, std::map<int, std::string> &row, int &h) {
    int quantity_of_stops;
    std::string bus_name;
    std::string stop_input;
    std::cin >> bus_name;
    std::cin >> quantity_of_stops;
    row[h] = bus_name;
    for (int j = 0; j < quantity_of_stops; ++j) {
        std::cin >> stop_input;
        bus_stops[bus_name].push_back(stop_input);
    }
}

int main() {
    int q;
    int h = 1;
    std::map<int, std::string> row;
    std::string input;
    std::map<std::string, std::vector<std::string>> bus_stops;
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        std::cin >> input;
        if (input == "NEW_BUS") {
            new_bus(bus_stops, row, h);
            ++h;
        }
        if (input == "BUSES_FOR_STOP") {
            buses_for_stop(bus_stops, row);
        }
        if (input == "STOPS_FOR_BUS") {
            stops_for_bus(bus_stops, row);
        }
        if (input == "ALL_BUSES") {
            all_buses(bus_stops);
        }
    }

    return 0;
}
