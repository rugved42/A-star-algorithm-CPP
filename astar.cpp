#include <iostream>
#include <stdio.h>
#include <vector>
// std::vector<float> astar();
class Node {
    public: 
        float g = 0.0; 
        float h = 0.0;
        float f = 0.0;
        std::tuple <float, float> parent; 
        std::tuple <float, float> end position; 
};

std::vector<float> astar(std::tuple <float, float> start, std::tuple <float, float> end, int maze[][] )
{
    std::cout << "This is the function " ; 
    // std::vector<float> b; 
    // b.push_back(22);
    start_node = Node();
    start_node.position = start; 
    start_node.g = 0; 
    start_node.h = 0;
    start_node.f = 0; 
    end_node = Node();
    end_node.position = end; 
    end_node.g = 0; 
    end_node.h = 0;
    end_node.f = 0; 
    std::vector<std::tuple <float, float>> open_list; 
    std::vector<std::tuple <float, float>> closed_list;
    open_list.push_back(start_node); 
    while (open_list.size() != 0 )
    {
        std::tuple <float, float> current_node = open_list[0]; 
        std::int current_index = 0; 
        for (std::int i = 0; i < open_list.size(); i++)
        {
            if (open_list[i].f < current_node.f) 
            {
                current_node = open_list[i];
                current_index = i; 
            }
        }
        open_list.erase(open_list.begin() + i);
        closed_list.push_back(current_node); 
        if (current_node == end_node)
        // {
            std::vector<float> path; 
            // std::tuple <float, float> current = current_node; 
            // while ()
            path.push_back(1); 
            return path
        // }
        typedef vector< std::tuple<int, int> > nechild;
        typedef vector< std::tuple<int, int> > children;
        children neighbor; 
        neighbor.push_back(std::tuple<int, int>(0,1));
        neighbor.push_back(std::tuple<int, int>(0,-1));
        neighbor.push_back(std::tuple<int, int>(1,1));
        neighbor.push_back(std::tuple<int, int>(1,-1));
        neighbor.push_back(std::tuple<int, int>(-1,1));
        neighbor.push_back(std::tuple<int, int>(-1,-1));
        neighbor.push_back(std::tuple<int, int>(1,0));
        neighbor.push_back(std::tuple<int, int>(-1,0)); 
        std::tuple<int, int> node_position; 
        for (children::const_iterator i = children.begin(); i != children.end(); ++i) {
        {
            node_position = make_tuple(get<0>(*i)+get<0>(current_node.position),get<1>(*i) + get<1>(current_node.position));
            if (get<0>(node_position) > X || (get<0>(node_position) < 0 || get<1>(node_position) > Y || get<1>(node_position) <0 )
            {
                continue; 
            }
            if (maze[get<0>(node_position)][get<1>(node_position)]) != 0)
            {
                continue; 
            }
            new_node = Node(); 
            new_node.parent = current_node; 
            new_node.position = node_position
        }
        

        

    }

    return b;
}

int main() { 
    std::vector<float> c; 
    c = astar(); 
    std::cout << "HI IM here" << c.size() ;
    return 0; 
}