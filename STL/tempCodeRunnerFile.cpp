
    set<int> st;
    st.insert(8);
    st.insert(10);
    st.insert(5);
    st.insert(7);

    for(auto it = st.begin();it!=st.end();++it)
    {
        cout<<(*it)<<'\n';
    }

    for(auto elem : st)
    {
        cout<<elem<<'\n';
    }