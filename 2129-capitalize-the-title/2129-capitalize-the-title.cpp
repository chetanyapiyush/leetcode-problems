class Solution {
public:
    string capitalizeTitle(string title) {
        for(int i = 0; i < title.size(); i++) {
            title[i] = tolower(title[i]);
        }
        int a = 0;
        for(int i = 0; i <= title.size(); i++) {
            if(i == title.size() || title[i] == ' ') {
                int len = i - a;
                if(len > 2) {
                    title[a] = toupper(title[a]);
                }
                a = i + 1;
            }
        }
        return title;
    }
};