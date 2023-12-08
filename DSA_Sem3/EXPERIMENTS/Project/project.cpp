#include <iostream>
#include <string>

using namespace std;

struct SongName{
    string songTitle;
    string songArtist;
    SongName* next;
    SongName(string stitle, string sartist){
        songTitle = stitle;
        songArtist = sartist;
        next = NULL;
    }
};
class SpotifyPlaylist{
    public:
    SongName* front;
    SongName* rear;
    SpotifyPlaylist(){
        front = NULL;
        rear = NULL;
    }

    void addNewSong(string songname, string artistname){
        SongName* newSongtoAdd = new SongName(songname,artistname);
        if(rear == NULL){
            front = newSongtoAdd;
            rear = newSongtoAdd;
        }
        else{
            rear->next = newSongtoAdd;
            rear = newSongtoAdd;
        }
        cout<<"New song " <<songname<<" is added to the playlist"<<endl;
    }
    void NextSong(){
        if(front!=NULL){
            SongName* tempCurrSong = front;
            front = front->next;
            cout<<"Playing "<<tempCurrSong->songTitle<<" from playlist\n";
            delete tempCurrSong;
        }
        else{
            cout<<"Sorry! Spotify Playlist is empty."<<endl;
        }
    }
    void removeCurrSong(){
        if(front!=NULL){
            SongName* tempCurrSong = front;
            front = front->next;
            cout<<"Removed "<<tempCurrSong->songTitle<<" from playlist\n";
            delete tempCurrSong;
        }
        else{
            cout<<"Sorry! Spotify Playlist is empty!"<<endl;
        }
    }
    ~SpotifyPlaylist(){
        while(front!= NULL){
            SongName* tempCurrSong = front;
            front = front->next;
            delete tempCurrSong;
        }
    }
};

int main()
{
    SpotifyPlaylist sp;
    while(true){
        cout<<" Spotify Music Playlist \n";
        cout << "1. Add a new song to the playlist\n";
        cout << "2. Play the next song from the playlist\n";
        cout << "3. Remove the current song from the playlist\n";
        cout << "4. Quit\n";
        cout << "Enter your choice : ";
    
    int choic;
    cin>>choic;

    switch (choic)
    {
       case 1: 
                {
                    string songtitle, songartist;
                    cout << "Enter song name: ";
                    cin.ignore();
                    getline(cin, songtitle);
                    cout << "Enter artist name: ";
                    getline(cin, songartist);
                    sp.addNewSong(songtitle, songartist);
                }
                break;

            case 2: 
                sp.NextSong();
                break;

            case 3: 
                sp.removeCurrSong();
                break;

            case 4: 
                cout << "Goodbye, have a nice day!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
  
