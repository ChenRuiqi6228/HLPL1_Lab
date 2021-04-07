#include "std_lib_facilities.h"
//definit the member of the point
struct Point
{
    int x, y;
};
int main()
{
    vector<Point> origin_points;
    cout << "Please input seven values of the point(x,y):" << endl;
    //（2）store it in origin_points
    for (int i = 0; i < 7; i++)
    {
        Point point;
        cin >> point.x >> point.y;
        origin_points.push_back(point);
    }

    //（3）print the data in origin_points
    cout << "origin_points:" << endl;
    for (int i = 0; i < origin_points.size(); i++)
        cout << "(" << origin_points[i].x << "," << origin_points[i].y << ")" << endl;

    //(4)output each point to mydata.txt
    string filename = "mydata.txt";
    ofstream out_file(filename.c_str());
    if (!out_file)
        cout << "can't open outputfile" << filename;
    else
    {
        for (int i = 0; i < origin_points.size(); i++)
        {
            if (i != 0)
                out_file << endl
                         << "(" << origin_points[i].x << "," << origin_points[i].y << ")";
            else
                out_file << "(" << origin_points[i].x << "," << origin_points[i].y << ")";
        }
    }
    out_file.close();

    //(5)read the data and store it in processed_points
    ifstream in_file(filename.c_str());
    vector<Point> processed_points;
    if (!in_file)
        cout << "can't open outputfile" << filename;
    else
    {
        for (int i = 0; !in_file.eof(); i++)
        {
            string s;
            Point point;
            in_file >> s;
            int prposition = s.find("(");
            int inposition = s.find(",");
            int lsposition = s.find(")");
            point.x = atoi(s.substr(prposition + 1, inposition).c_str());
            point.y = atoi(s.substr(inposition + 1, lsposition).c_str());
            processed_points.push_back(point);
        }
    }

    //(6)print the data elements from both vectors
    //打印origin_points
    cout << "origin_points:" << endl;
    for (int i = 0; i < origin_points.size(); i++)
        cout << "(" << origin_points[i].x << "," << origin_points[i].y << ")" << endl;
    //print the data from processed_points
    cout << "processed_points:" << endl;
    for (int i = 0; i < processed_points.size(); i++)
        cout << "(" << processed_points[i].x << "," << processed_points[i].y << ")" << endl;

    //(7)compare them
    bool equal = true;
    int size_1 = origin_points.size();
    int size_2 = processed_points.size();

    if (size_1 != size_2)
    {
        cout << "Something‘s wrong！" << endl;
        equal=false;
    }
    else
    {
        for (vector<Point>::iterator ite1 = origin_points.begin(), ite2 = processed_points.begin(); ite1 != origin_points.end(), ite2 != processed_points.end(); ite1++, ite2++)
        {
            if ((*ite1).x != (*ite2).x || (*ite1).y != (*ite2).y)
            {
                cout << "Something‘s wrong！" << endl;
                equal=false;
                break;
            }
        }
    }
    if (equal == true)
        cout << "YES" << endl;
}
