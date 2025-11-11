// // Minimum Remove to Make Valid Parentheses

// class Solution {
// public:
//     string minRemoveToMakeValid(string s) {
//          stack<int> st;
//          string ans ="";
//           ans.reserve(s.size());
         

//     for(int i=0;i<s.length();i++){
//         char ch  = s[i];
//         if(s[i]=='('){
//             st.push(i); 
//         }else if(s[i]==')'){
//             if(!st.empty()){
//                 st.pop();
//             }else{
//                 s[i] = '#';
//             }
//         }
//     }

// while(!st.empty()){
//     s[st.top()] = '#';
//     st.pop();
//             //     int idx = st.top();
//             // st.pop();
//             // if (idx >= 0 && idx < (int)s.size())  // boundary check
//             //     s[idx] = '#';

// }

// for (int i = 0; i < s.size(); i++) {
//             if (s[i] != '#') {
//               ans.push_back(s[i]);
//               //  ans = ans + s[i];
//             }
//         }

//     return ans;
//     }
// };

// // Redundant Brackets

// #include <bits/stdc++.h> 
// bool findRedundantBrackets(string &s)
// {                                                                                                               
//     stack<char> st;
//     for(int i=0;i<s.length();i++){
//         char ch  = s[i];
//         if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'){
//             st.push(ch);
//         }else{
//             if(ch==')'){
//                 bool isReduntant  = true;
//                 while(st.top() != '('){
//                     char top = st.top();
//                     if(top=='+' ||top=='-' || top=='*'|| top=='/'){
//                         isReduntant = false;
//                     }
//                     st.pop();
//                 }
//                 if(isReduntant == true) return true;
//                 st.pop();
//             }
//         }
//     }
//     return false;
// }                                                                                                                      
