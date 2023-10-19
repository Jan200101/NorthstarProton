struct cppISteamFriends_SteamFriends001_GetPersonaName_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamFriends_SteamFriends001_GetPersonaName( struct cppISteamFriends_SteamFriends001_GetPersonaName_params *params );

struct cppISteamFriends_SteamFriends001_SetPersonaName_params
{
    void *linux_side;
    const char *pchPersonaName;
};
extern void cppISteamFriends_SteamFriends001_SetPersonaName( struct cppISteamFriends_SteamFriends001_SetPersonaName_params *params );

struct cppISteamFriends_SteamFriends001_GetPersonaState_params
{
    void *linux_side;
    EPersonaState _ret;
};
extern void cppISteamFriends_SteamFriends001_GetPersonaState( struct cppISteamFriends_SteamFriends001_GetPersonaState_params *params );

struct cppISteamFriends_SteamFriends001_SetPersonaState_params
{
    void *linux_side;
    EPersonaState ePersonaState;
};
extern void cppISteamFriends_SteamFriends001_SetPersonaState( struct cppISteamFriends_SteamFriends001_SetPersonaState_params *params );

struct cppISteamFriends_SteamFriends001_AddFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_AddFriend( struct cppISteamFriends_SteamFriends001_AddFriend_params *params );

struct cppISteamFriends_SteamFriends001_RemoveFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_RemoveFriend( struct cppISteamFriends_SteamFriends001_RemoveFriend_params *params );

struct cppISteamFriends_SteamFriends001_HasFriend_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_HasFriend( struct cppISteamFriends_SteamFriends001_HasFriend_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendRelationship_params
{
    void *linux_side;
    EFriendRelationship _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_GetFriendRelationship( struct cppISteamFriends_SteamFriends001_GetFriendRelationship_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendPersonaState_params
{
    void *linux_side;
    EPersonaState _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_GetFriendPersonaState( struct cppISteamFriends_SteamFriends001_GetFriendPersonaState_params *params );

struct cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    int32 *pnGameID;
    uint32 *punGameIP;
    uint16 *pusGamePort;
};
extern void cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendPersonaName_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_GetFriendPersonaName( struct cppISteamFriends_SteamFriends001_GetFriendPersonaName_params *params );

struct cppISteamFriends_SteamFriends001_AddFriendByName_params
{
    void *linux_side;
    int32 _ret;
    const char *pchEmailOrAccountName;
};
extern void cppISteamFriends_SteamFriends001_AddFriendByName( struct cppISteamFriends_SteamFriends001_AddFriendByName_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamFriends_SteamFriends001_GetFriendCount( struct cppISteamFriends_SteamFriends001_GetFriendCount_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendByIndex_params
{
    void *linux_side;
    CSteamID *_ret;
    int iFriend;
};
extern void cppISteamFriends_SteamFriends001_GetFriendByIndex( struct cppISteamFriends_SteamFriends001_GetFriendByIndex_params *params );

struct cppISteamFriends_SteamFriends001_SendMsgToFriend_params
{
    void *linux_side;
    CSteamID steamIDFriend;
    EChatEntryType eChatEntryType;
    const char *pchMsgBody;
};
extern void cppISteamFriends_SteamFriends001_SendMsgToFriend( struct cppISteamFriends_SteamFriends001_SendMsgToFriend_params *params );

struct cppISteamFriends_SteamFriends001_SetFriendRegValue_params
{
    void *linux_side;
    CSteamID steamIDFriend;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamFriends_SteamFriends001_SetFriendRegValue( struct cppISteamFriends_SteamFriends001_SetFriendRegValue_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendRegValue_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    const char *pchKey;
};
extern void cppISteamFriends_SteamFriends001_GetFriendRegValue( struct cppISteamFriends_SteamFriends001_GetFriendRegValue_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params
{
    void *linux_side;
    const char *_ret;
    CSteamID steamIDFriend;
    int iPersonaName;
};
extern void cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory_params *params );

struct cppISteamFriends_SteamFriends001_GetChatMessage_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
    int iChatID;
    void *pvData;
    int cubData;
    EChatEntryType *peChatEntryType;
};
extern void cppISteamFriends_SteamFriends001_GetChatMessage( struct cppISteamFriends_SteamFriends001_GetChatMessage_params *params );

struct cppISteamFriends_SteamFriends001_SendMsgToFriend_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    EChatEntryType eChatEntryType;
    const void *pvMsgBody;
    int cubMsgBody;
};
extern void cppISteamFriends_SteamFriends001_SendMsgToFriend_2( struct cppISteamFriends_SteamFriends001_SendMsgToFriend_2_params *params );

struct cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params
{
    void *linux_side;
    int _ret;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart( struct cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart_params *params );

struct cppISteamFriends_SteamFriends001_SetChatHistoryStart_params
{
    void *linux_side;
    CSteamID steamIDFriend;
    int iChatID;
};
extern void cppISteamFriends_SteamFriends001_SetChatHistoryStart( struct cppISteamFriends_SteamFriends001_SetChatHistoryStart_params *params );

struct cppISteamFriends_SteamFriends001_ClearChatHistory_params
{
    void *linux_side;
    CSteamID steamIDFriend;
};
extern void cppISteamFriends_SteamFriends001_ClearChatHistory( struct cppISteamFriends_SteamFriends001_ClearChatHistory_params *params );

struct cppISteamFriends_SteamFriends001_InviteFriendByEmail_params
{
    void *linux_side;
    bool _ret;
    const char *pchEmailAccount;
};
extern void cppISteamFriends_SteamFriends001_InviteFriendByEmail( struct cppISteamFriends_SteamFriends001_InviteFriendByEmail_params *params );

struct cppISteamFriends_SteamFriends001_GetBlockedFriendCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamFriends_SteamFriends001_GetBlockedFriendCount( struct cppISteamFriends_SteamFriends001_GetBlockedFriendCount_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    uint64 *pulGameID;
    uint32 *punGameIP;
    uint16 *pusGamePort;
};
extern void cppISteamFriends_SteamFriends001_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed_params *params );

struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDFriend;
    uint64 *pulGameID;
    uint32 *punGameIP;
    uint16 *pusGamePort;
    uint16 *pusQueryPort;
};
extern void cppISteamFriends_SteamFriends001_GetFriendGamePlayed2( struct cppISteamFriends_SteamFriends001_GetFriendGamePlayed2_params *params );

