#pragma once

/// <summary>
/// Website paid user
/// </summary>
class PaidUser :
    public User
{
private:

    /// <summary>
    /// Posts
    /// </summary>
    Post* _posts;

    /// <summary>
    /// Posts count
    /// </summary>
    int _postsCount;

public:

    /// <summary>
    /// Setter function for posts
    /// </summary>
    /// <param name="posts">Posts</param>
    /// <param name="postsCount">Count of posts</param>
    void SetPosts(Post* posts, 
                  int postsCount);

    /// <summary>
    /// Getter function for posts
    /// </summary>
    /// <returns>Array of posts</returns>
    Post* GetPosts();

    /// <summary>
    /// Getter function for posts count
    /// </summary>
    /// <returns>Posts count</returns>
    int GetPostsCount();

    /// <summary>
    /// Create new paid user with posts
    /// </summary>
    /// <param name="id">ID</param>
    /// <param name="login">Login</param>
    /// <param name="password">Password</param>
    /// <param name="posts">Posts</param>
    /// <param name="postsCount">Posts count</param>
    PaidUser(int id, 
             string login, 
             string password, 
             Post* posts, 
             int postsCount);

    /// <summary>
    /// Creates new paid user without posts
    /// </summary>
    /// <param name="id">ID</param>
    /// <param name="login">Login</param>
    /// <param name="password">Password</param>
    PaidUser(int id, 
             string login, 
             string password);
};

