#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_AU3 = {{
//++Autogenerated -- start of section automatically generated
"And ByRef Case Const ContinueCase ContinueLoop Default Dim Do "
"Else ElseIf EndFunc EndIf EndSelect EndSwitch EndWith Enum Exit ExitLoop False For Func Global If In Local "
"Next Not Null Or ReDim Return Select Static Step Switch Then To True Until Volatile Wend While With "

, // 1 functions
"Abs( ACos( AdlibRegister( AdlibUnRegister( Asc( AscW( ASin( Assign( ATan( "
"AutoItSetOption( AutoItWinGetTitle( AutoItWinSetTitle( "
"Beep( Binary( BinaryLen( BinaryMid( BinaryToString( BitAND( BitNOT( BitOR( BitRotate( BitShift( BitXOR( BlockInput( "
"Break( "
"Call( CDTray( Ceiling( Chr( ChrW( ClipGet( ClipPut( ConsoleRead( ConsoleWrite( ConsoleWriteError( "
"ControlClick( ControlCommand( ControlDisable( ControlEnable( ControlFocus( "
"ControlGetFocus( ControlGetHandle( ControlGetPos( ControlGetText( ControlHide( ControlListView( ControlMove( "
"ControlSend( ControlSetText( ControlShow( ControlTreeView( Cos( "
"Dec( DirCopy( DirCreate( DirGetSize( DirMove( DirRemove( "
"DllCall( DllCallAddress( DllCallbackFree( DllCallbackGetPtr( DllCallbackRegister( DllClose( DllOpen( "
"DllStructCreate( DllStructGetData( DllStructGetPtr( DllStructGetSize( DllStructSetData( "
"DriveGetDrive( DriveGetFileSystem( DriveGetLabel( DriveGetSerial( DriveGetType( DriveMapAdd( DriveMapDel( DriveMapGet( "
"DriveSetLabel( DriveSpaceFree( DriveSpaceTotal( DriveStatus( "
"EnvGet( EnvSet( EnvUpdate( Eval( Execute( Exp( "
"FileChangeDir( FileClose( FileCopy( FileCreateNTFSLink( FileCreateShortcut( FileDelete( FileExists( "
"FileFindFirstFile( FileFindNextFile( FileFlush( FileGetAttrib( FileGetEncoding( FileGetLongName( FileGetPos( "
"FileGetShortcut( FileGetShortName( FileGetSize( FileGetTime( FileGetVersion( FileInstall( FileMove( "
"FileOpen( FileOpenDialog( FileRead( FileReadLine( FileReadToArray( FileRecycle( FileRecycleEmpty( "
"FileSaveDialog( FileSelectFolder( FileSetAttrib( FileSetEnd( FileSetPos( FileSetTime( FileWrite( FileWriteLine( Floor( "
"FtpSetProxy( FuncName( "
"GUICreate( GUICtrlCreateAvi( GUICtrlCreateButton( GUICtrlCreateCheckbox( GUICtrlCreateCombo( GUICtrlCreateContextMenu( "
"GUICtrlCreateDate( GUICtrlCreateDummy( GUICtrlCreateEdit( GUICtrlCreateGraphic( GUICtrlCreateGroup( "
"GUICtrlCreateIcon( GUICtrlCreateInput( "
"GUICtrlCreateLabel( GUICtrlCreateList( GUICtrlCreateListView( GUICtrlCreateListViewItem( "
"GUICtrlCreateMenu( GUICtrlCreateMenuItem( GUICtrlCreateMonthCal( GUICtrlCreateObj( "
"GUICtrlCreatePic( GUICtrlCreateProgress( GUICtrlCreateRadio( GUICtrlCreateSlider( "
"GUICtrlCreateTab( GUICtrlCreateTabItem( GUICtrlCreateTreeView( GUICtrlCreateTreeViewItem( GUICtrlCreateUpdown( "
"GUICtrlDelete( GUICtrlGetHandle( GUICtrlGetState( GUICtrlRead( GUICtrlRecvMsg( GUICtrlRegisterListViewSort( "
"GUICtrlSendMsg( GUICtrlSendToDummy( GUICtrlSetBkColor( GUICtrlSetColor( GUICtrlSetCursor( "
"GUICtrlSetData( GUICtrlSetDefBkColor( GUICtrlSetDefColor( GUICtrlSetFont( GUICtrlSetGraphic( GUICtrlSetImage( "
"GUICtrlSetLimit( GUICtrlSetOnEvent( GUICtrlSetPos( GUICtrlSetResizing( GUICtrlSetState( GUICtrlSetStyle( GUICtrlSetTip( "
"GUIDelete( GUIGetCursorInfo( GUIGetMsg( GUIGetStyle( GUIRegisterMsg( GUISetAccelerators( GUISetBkColor( "
"GUISetCoord( GUISetCursor( GUISetFont( GUISetHelp( GUISetIcon( GUISetOnEvent( GUISetState( GUISetStyle( GUIStartGroup( "
"GUISwitch( "
"Hex( HotKeySet( HttpSetProxy( HttpSetUserAgent( HWnd( "
"InetClose( InetGet( InetGetInfo( InetGetSize( InetRead( "
"IniDelete( IniRead( IniReadSection( IniReadSectionNames( IniRenameSection( IniWrite( IniWriteSection( InputBox( Int( "
"IsAdmin( IsArray( IsBinary( IsBool( IsDeclared( IsDllStruct( IsFloat( IsFunc( IsHWnd( IsInt( IsKeyword( IsMap( "
"IsNumber( IsObj( IsPtr( IsString( "
"Log( "
"MapAppend( MapExists( MapKeys( MapRemove( MemGetStats( "
"Mod( MouseClick( MouseClickDrag( MouseDown( MouseGetCursor( MouseGetPos( MouseMove( MouseUp( MouseWheel( MsgBox( "
"Number( ObjCreate( ObjCreateInterface( ObjEvent( ObjGet( ObjName( OnAutoItExitRegister( OnAutoItExitUnRegister( Opt( "
"Ping( PixelChecksum( PixelGetColor( PixelSearch( "
"ProcessClose( ProcessExists( ProcessGetStats( ProcessList( ProcessSetPriority( ProcessWait( ProcessWaitClose( "
"ProgressOff( ProgressOn( ProgressSet( Ptr( "
"Random( RegDelete( RegEnumKey( RegEnumVal( RegRead( RegWrite( Round( Run( RunAs( RunAsWait( RunWait( "
"Send( SendKeepActive( SetError( SetExtended( ShellExecute( ShellExecuteWait( Shutdown( Sin( Sleep( "
"SoundPlay( SoundSetWaveVolume( SplashImageOn( SplashOff( SplashTextOn( Sqrt( SRandom( StatusbarGetText( "
"StderrRead( StdinWrite( StdioClose( StdoutRead( String( StringAddCR( StringCompare( StringFormat( StringFromASCIIArray( "
"StringInStr( StringIsAlNum( StringIsAlpha( StringIsASCII( StringIsDigit( StringIsFloat( StringIsInt( StringIsLower( "
"StringIsSpace( StringIsUpper( StringIsXDigit( StringLeft( StringLen( StringLower( StringMid( "
"StringRegExp( StringRegExpReplace( StringReplace( StringReverse( StringRight( "
"StringSplit( StringStripCR( StringStripWS( StringToASCIIArray( StringToBinary( StringTrimLeft( StringTrimRight( "
"StringUpper( "
"Tan( TCPAccept( TCPCloseSocket( TCPConnect( TCPListen( TCPNameToIP( TCPRecv( TCPSend( TCPShutdown( TCPStartup( "
"TimerDiff( TimerInit( ToolTip( TrayCreateItem( TrayCreateMenu( TrayGetMsg( TrayItemDelete( "
"TrayItemGetHandle( TrayItemGetState( TrayItemGetText( TrayItemSetOnEvent( TrayItemSetState( TrayItemSetText( "
"TraySetClick( TraySetIcon( TraySetOnEvent( TraySetPauseIcon( TraySetState( TraySetToolTip( TrayTip( "
"UBound( UDPBind( UDPCloseSocket( UDPOpen( UDPRecv( UDPSend( UDPShutdown( UDPStartup( VarGetType( "
"WinActivate( WinActive( WinClose( WinExists( WinFlash( WinGetCaretPos( WinGetClassList( WinGetClientSize( WinGetHandle( "
"WinGetPos( WinGetProcess( WinGetState( WinGetText( WinGetTitle( WinKill( WinList( "
"WinMenuSelectItem( WinMinimizeAll( WinMinimizeAllUndo( WinMove( WinSetOnTop( WinSetState( WinSetTitle( WinSetTrans( "
"WinWait( WinWaitActive( WinWaitClose( WinWaitNotActive( "

, // 2 macros
"AppDataCommonDir AppDataDir AutoItExe AutoItPID AutoItVersion AutoItX64 "
"COM_EventObj CommonFilesDir Compiled ComputerName ComSpec CPUArch CR CRLF "
"DesktopCommonDir DesktopDepth DesktopDir DesktopHeight DesktopRefresh DesktopWidth DocumentsCommonDir "
"error exitCode exitMethod extended FavoritesCommonDir FavoritesDir "
"GUI_CtrlHandle GUI_CtrlId GUI_DragFile GUI_DragId GUI_DropId GUI_WinHandle "
"HomeDrive HomePath HomeShare HotKeyPressed HOUR IPAddress1 IPAddress2 IPAddress3 IPAddress4 KBLayout "
"LF LocalAppDataDir LogonDNSDomain LogonDomain LogonServer MDAY MIN MON MSEC MUILang MyDocumentsDir NumParams "
"OSArch OSBuild OSLang OSServicePack OSType OSVersion ProgramFilesDir ProgramsCommonDir ProgramsDir "
"ScriptDir ScriptFullPath ScriptLineNumber ScriptName SEC StartMenuCommonDir StartMenuDir StartupCommonDir StartupDir "
"SW_DISABLE SW_ENABLE SW_HIDE SW_LOCK SW_MAXIMIZE SW_MINIMIZE SW_RESTORE "
"SW_SHOW SW_SHOWDEFAULT SW_SHOWMAXIMIZED SW_SHOWMINIMIZED SW_SHOWMINNOACTIVE SW_SHOWNA SW_SHOWNOACTIVATE SW_SHOWNORMAL "
"SW_UNLOCK SystemDir "
"TAB TempDir TRAY_ID TrayIconFlashing TrayIconVisible UserName UserProfileDir WDAY WindowsDir WorkingDir YDAY YEAR "

, // 3 sent keys
"Alt AltDown AltUp AppsKey Asc "
"Backspace Break Browser_Back Browser_Favorites Browser_Forward Browser_Home Browser_Refresh Browser_Search Browser_Stop "
"BS "
"CapsLock CtrlDown CtrlUp Del Delete Down End Enter Esc Escape F1 F10 F11 F12 F2 F3 F4 F5 F6 F7 F8 F9 Home Ins Insert "
"LAlt Launch_App1 Launch_App2 Launch_Mail Launch_Media LCtrl Left LShift LWin LWinDown LWinUp "
"Media_Next Media_Play_Pause Media_Prev Media_Stop "
"NumLock Numpad0 Numpad1 Numpad2 Numpad3 Numpad4 Numpad5 Numpad6 Numpad7 Numpad8 Numpad9 NumpadAdd NumpadDiv NumpadDot "
"NumpadEnter NumpadMult NumpadSub "
"OEM_102 Pause PgDn PgUp PrintScreen RAlt RCtrl Right RShift RWin RWinDown RWinUp "
"ScrollLock ShiftDown ShiftUp Sleep Space Tab Up Volume_Down Volume_Mute Volume_Up "

, // 4 directives
"ce comments-end comments-start cs forcedef forceref ignorefunc include include-once NoTrayIcon OnAutoItStartRegister "
"pragma RequireAdmin "

, // 5 special
"Au3Stripper_Ignore_Funcs Au3Stripper_Ignore_Variables Au3Stripper_Off Au3Stripper_On Au3Stripper_Parameters "
"AutoIt3Wrapper_Add_Constants AutoIt3Wrapper_Au3Check_Parameters AutoIt3Wrapper_Au3check_Stop_OnWarning "
"AutoIt3Wrapper_Aut2exe AutoIt3Wrapper_AutoIt3 AutoIt3Wrapper_Autoit3Dir "
"AutoIt3Wrapper_Change2CUI AutoIt3Wrapper_Compile_both AutoIt3Wrapper_Compression AutoIt3Wrapper_CvsWrapper_Parameters "
"AutoIt3Wrapper_EndIf AutoIt3Wrapper_Icon AutoIt3Wrapper_If_Compile AutoIt3Wrapper_If_Run "
"AutoIt3Wrapper_Jump_To_First_Error AutoIt3Wrapper_OutFile AutoIt3Wrapper_OutFile_Type AutoIt3Wrapper_OutFile_X64 "
"AutoIt3Wrapper_Plugin_Funcs AutoIt3Wrapper_Res_Comment AutoIt3Wrapper_Res_Compatibility AutoIt3Wrapper_Res_Description "
"AutoIt3Wrapper_Res_Field "
"AutoIt3Wrapper_Res_File_Add AutoIt3Wrapper_Res_FileVersion AutoIt3Wrapper_Res_FileVersion_AutoIncrement "
"AutoIt3Wrapper_Res_Icon_Add AutoIt3Wrapper_Res_Language AutoIt3Wrapper_Res_LegalCopyright "
"AutoIt3Wrapper_Res_ProductVersion AutoIt3Wrapper_Res_RequestedExecutionLevel AutoIt3Wrapper_Res_SaveSource "
"AutoIt3Wrapper_Run_After AutoIt3Wrapper_Run_Au3Check AutoIt3Wrapper_Run_Au3Stripper AutoIt3Wrapper_Run_Before "
"AutoIt3Wrapper_Run_CvsWrapper AutoIt3Wrapper_Run_Debug_Mode AutoIt3Wrapper_Run_Obfuscator "
"AutoIt3Wrapper_Run_SciTE_Minimized AutoIt3Wrapper_Run_SciTE_OutputPane_Minimized AutoIt3Wrapper_Run_Tidy "
"AutoIt3Wrapper_Testing AutoIt3Wrapper_Tidy_Stop_OnError "
"AutoIt3Wrapper_UPX_Parameters AutoIt3Wrapper_UseAnsi AutoIt3Wrapper_UseUpx AutoIt3Wrapper_UseX64 "
"AutoIt3Wrapper_Version AutoIt3Wrapper_Versioning AutoIt3Wrapper_Versioning_Parameters "
"EndRegion Obfuscator_Ignore_Funcs Obfuscator_Ignore_Variables Obfuscator_Parameters Region Tidy_Parameters "

, // 6 user defined functions
"^_GDIPlus_ ^_GUICtrl ^_WinAPI_ "
"_Array1DToHistogram( _Array2DCreate( _ArrayAdd( _ArrayBinarySearch( "
"_ArrayColDelete( _ArrayColInsert( _ArrayCombinations( _ArrayConcatenate( _ArrayDelete( _ArrayDisplay( _ArrayExtract( "
"_ArrayFindAll( _ArrayFromString( _ArrayInsert( _ArrayMax( _ArrayMaxIndex( _ArrayMin( _ArrayMinIndex( "
"_ArrayPermute( _ArrayPop( _ArrayPush( _ArrayReverse( _ArraySearch( _ArrayShuffle( _ArraySort( _ArraySwap( "
"_ArrayToClip( _ArrayToString( _ArrayTranspose( _ArrayTrim( _ArrayUnique( _Assert( _ChooseColor( _ChooseFont( "
"_ClipBoard_ChangeChain( _ClipBoard_Close( _ClipBoard_CountFormats( _ClipBoard_Empty( _ClipBoard_EnumFormats( "
"_ClipBoard_FormatStr( _ClipBoard_GetData( _ClipBoard_GetDataEx( _ClipBoard_GetFormatName( "
"_ClipBoard_GetOpenWindow( _ClipBoard_GetOwner( _ClipBoard_GetPriorityFormat( _ClipBoard_GetSequenceNumber( "
"_ClipBoard_GetViewer( _ClipBoard_IsFormatAvailable( _ClipBoard_Open( _ClipBoard_RegisterFormat( "
"_ClipBoard_SetData( _ClipBoard_SetDataEx( _ClipBoard_SetViewer( _ClipPutFile( "
"_ColorConvertHSLtoRGB( _ColorConvertRGBtoHSL( "
"_ColorGetBlue( _ColorGetCOLORREF( _ColorGetGreen( _ColorGetRed( _ColorGetRGB( _ColorSetCOLORREF( _ColorSetRGB( "
"_Crypt_DecryptData( _Crypt_DecryptFile( _Crypt_DeriveKey( _Crypt_DestroyKey( _Crypt_EncryptData( _Crypt_EncryptFile( "
"_Crypt_GenRandom( _Crypt_HashData( _Crypt_HashFile( _Crypt_Shutdown( _Crypt_Startup( _Date_Time_CompareFileTime( "
"_Date_Time_DOSDateTimeToArray( _Date_Time_DOSDateTimeToFileTime( _Date_Time_DOSDateTimeToStr( "
"_Date_Time_DOSDateToArray( _Date_Time_DOSDateToStr( _Date_Time_DOSTimeToArray( _Date_Time_DOSTimeToStr( "
"_Date_Time_EncodeFileTime( _Date_Time_EncodeSystemTime( _Date_Time_FileTimeToArray( _Date_Time_FileTimeToDOSDateTime( "
"_Date_Time_FileTimeToLocalFileTime( _Date_Time_FileTimeToStr( _Date_Time_FileTimeToSystemTime( _Date_Time_GetFileTime( "
"_Date_Time_GetLocalTime( _Date_Time_GetSystemTime( "
"_Date_Time_GetSystemTimeAdjustment( _Date_Time_GetSystemTimeAsFileTime( _Date_Time_GetSystemTimes( "
"_Date_Time_GetTickCount( _Date_Time_GetTimeZoneInformation( _Date_Time_LocalFileTimeToFileTime( _Date_Time_SetFileTime( "
"_Date_Time_SetLocalTime( _Date_Time_SetSystemTime( _Date_Time_SetSystemTimeAdjustment( "
"_Date_Time_SetTimeZoneInformation( _Date_Time_SystemTimeToArray( "
"_Date_Time_SystemTimeToDateStr( _Date_Time_SystemTimeToDateTimeStr( _Date_Time_SystemTimeToFileTime( "
"_Date_Time_SystemTimeToTimeStr( _Date_Time_SystemTimeToTzSpecificLocalTime( _Date_Time_TzSpecificLocalTimeToSystemTime( "
"_DateAdd( _DateDayOfWeek( _DateDaysInMonth( _DateDiff( _DateIsLeapYear( _DateIsValid( "
"_DateTimeFormat( _DateTimeSplit( _DateToDayOfWeek( _DateToDayOfWeekISO( _DateToDayValue( _DateToMonth( _DayValueToDate( "
"_DebugArrayDisplay( _DebugBugReportEnv( _DebugCOMError( _DebugOut( _DebugReport( _DebugReportEx( _DebugReportVar( "
"_DebugSetup( _Degree( _EventLog__Backup( _EventLog__Clear( _EventLog__Close( _EventLog__Count( "
"_EventLog__DeregisterSource( _EventLog__Full( _EventLog__Notify( "
"_EventLog__Oldest( _EventLog__Open( _EventLog__OpenBackup( "
"_EventLog__Read( _EventLog__RegisterSource( _EventLog__Report( _Excel_BookAttach( _Excel_BookClose( _Excel_BookList( "
"_Excel_BookNew( _Excel_BookOpen( _Excel_BookOpenText( _Excel_BookSave( _Excel_BookSaveAs( "
"_Excel_Close( _Excel_ColumnToLetter( _Excel_ColumnToNumber( _Excel_ConvertFormula( _Excel_Export( "
"_Excel_FilterGet( _Excel_FilterSet( _Excel_Open( _Excel_PictureAdd( _Excel_Print( _Excel_RangeCopyPaste( "
"_Excel_RangeDelete( _Excel_RangeFind( _Excel_RangeInsert( _Excel_RangeLinkAddRemove( "
"_Excel_RangeRead( _Excel_RangeReplace( _Excel_RangeSort( _Excel_RangeValidate( _Excel_RangeWrite( "
"_Excel_SheetAdd( _Excel_SheetCopyMove( _Excel_SheetDelete( _Excel_SheetList( _FileCountLines( _FileCreate( "
"_FileListToArray( _FileListToArrayRec( _FilePrint( _FileReadToArray( "
"_FileWriteFromArray( _FileWriteLog( _FileWriteToLine( _FormatAutoItExitCode( _FormatAutoItExitMethod( "
"_FTP_Close( _FTP_Command( _FTP_Connect( "
"_FTP_DecodeInternetStatus( _FTP_DirCreate( _FTP_DirDelete( _FTP_DirGetCurrent( _FTP_DirPutContents( _FTP_DirSetCurrent( "
"_FTP_FileClose( _FTP_FileDelete( _FTP_FileGet( _FTP_FileGetSize( _FTP_FileOpen( _FTP_FilePut( "
"_FTP_FileRead( _FTP_FileRename( _FTP_FileTimeLoHiToStr( _FTP_FindFileClose( _FTP_FindFileFirst( _FTP_FindFileNext( "
"_FTP_GetLastResponseInfo( _FTP_ListToArray( _FTP_ListToArray2D( _FTP_ListToArrayEx( _FTP_Open( "
"_FTP_ProgressDownload( _FTP_ProgressUpload( _FTP_SetStatusCallback( _GetIP( "
"_GUIImageList_Add( _GUIImageList_AddBitmap( _GUIImageList_AddIcon( _GUIImageList_AddMasked( _GUIImageList_BeginDrag( "
"_GUIImageList_Copy( _GUIImageList_Create( _GUIImageList_Destroy( _GUIImageList_DestroyIcon( "
"_GUIImageList_DragEnter( _GUIImageList_DragLeave( _GUIImageList_DragMove( _GUIImageList_Draw( _GUIImageList_DrawEx( "
"_GUIImageList_Duplicate( _GUIImageList_EndDrag( _GUIImageList_GetBkColor( _GUIImageList_GetIcon( "
"_GUIImageList_GetIconHeight( _GUIImageList_GetIconSize( _GUIImageList_GetIconSizeEx( _GUIImageList_GetIconWidth( "
"_GUIImageList_GetImageCount( _GUIImageList_GetImageInfoEx( _GUIImageList_Remove( _GUIImageList_ReplaceIcon( "
"_GUIImageList_SetBkColor( _GUIImageList_SetIconSize( _GUIImageList_SetImageCount( _GUIImageList_Swap( "
"_GUIScrollBars_EnableScrollBar( _GUIScrollBars_GetScrollBarInfoEx( "
"_GUIScrollBars_GetScrollBarRect( _GUIScrollBars_GetScrollBarRGState( _GUIScrollBars_GetScrollBarXYLineButton( "
"_GUIScrollBars_GetScrollBarXYThumbBottom( _GUIScrollBars_GetScrollBarXYThumbTop( _GUIScrollBars_GetScrollInfo( "
"_GUIScrollBars_GetScrollInfoEx( _GUIScrollBars_GetScrollInfoMax( _GUIScrollBars_GetScrollInfoMin( "
"_GUIScrollBars_GetScrollInfoPage( _GUIScrollBars_GetScrollInfoPos( _GUIScrollBars_GetScrollInfoTrackPos( "
"_GUIScrollBars_GetScrollPos( _GUIScrollBars_GetScrollRange( _GUIScrollBars_Init( _GUIScrollBars_ScrollWindow( "
"_GUIScrollBars_SetScrollInfo( _GUIScrollBars_SetScrollInfoMax( _GUIScrollBars_SetScrollInfoMin( "
"_GUIScrollBars_SetScrollInfoPage( _GUIScrollBars_SetScrollInfoPos( _GUIScrollBars_SetScrollRange( "
"_GUIScrollBars_ShowScrollBar( _GUIToolTip_Activate( _GUIToolTip_AddTool( _GUIToolTip_AdjustRect( _GUIToolTip_BitsToTTF( "
"_GUIToolTip_Create( _GUIToolTip_Deactivate( _GUIToolTip_DelTool( _GUIToolTip_Destroy( _GUIToolTip_EnumTools( "
"_GUIToolTip_GetBubbleHeight( _GUIToolTip_GetBubbleSize( _GUIToolTip_GetBubbleWidth( _GUIToolTip_GetCurrentTool( "
"_GUIToolTip_GetDelayTime( _GUIToolTip_GetMargin( _GUIToolTip_GetMarginEx( _GUIToolTip_GetMaxTipWidth( "
"_GUIToolTip_GetText( "
"_GUIToolTip_GetTipBkColor( _GUIToolTip_GetTipTextColor( _GUIToolTip_GetTitleBitMap( _GUIToolTip_GetTitleText( "
"_GUIToolTip_GetToolCount( _GUIToolTip_GetToolInfo( _GUIToolTip_HitTest( _GUIToolTip_NewToolRect( "
"_GUIToolTip_Pop( _GUIToolTip_PopUp( _GUIToolTip_SetDelayTime( _GUIToolTip_SetMargin( _GUIToolTip_SetMaxTipWidth( "
"_GUIToolTip_SetTipBkColor( _GUIToolTip_SetTipTextColor( _GUIToolTip_SetTitle( _GUIToolTip_SetToolInfo( "
"_GUIToolTip_SetWindowTheme( "
"_GUIToolTip_ToolExists( _GUIToolTip_ToolToArray( _GUIToolTip_TrackActivate( _GUIToolTip_TrackPosition( "
"_GUIToolTip_Update( _GUIToolTip_UpdateTipText( _HexToString( _IE_Example( _IE_Introduction( _IE_VersionInfo( "
"_IEAction( _IEAttach( _IEBodyReadHTML( _IEBodyReadText( _IEBodyWriteHTML( _IECreate( _IECreateEmbedded( "
"_IEDocGetObj( _IEDocInsertHTML( _IEDocInsertText( _IEDocReadHTML( _IEDocWriteHTML( _IEErrorNotify( "
"_IEFormElementCheckBoxSelect( _IEFormElementGetCollection( _IEFormElementGetObjByName( _IEFormElementGetValue( "
"_IEFormElementOptionSelect( _IEFormElementRadioSelect( _IEFormElementSetValue( "
"_IEFormGetCollection( _IEFormGetObjByName( _IEFormImageClick( _IEFormReset( _IEFormSubmit( "
"_IEFrameGetCollection( _IEFrameGetObjByName( _IEGetObjById( _IEGetObjByName( _IEHeadInsertEventScript( "
"_IEImgClick( _IEImgGetCollection( _IEIsFrameSet( "
"_IELinkClickByIndex( _IELinkClickByText( _IELinkGetCollection( _IELoadWait( _IELoadWaitTimeout( _IENavigate( "
"_IEPropertyGet( _IEPropertySet( _IEQuit( "
"_IETableGetCollection( _IETableWriteToArray( _IETagNameAllGetCollection( _IETagNameGetCollection( "
"_INetExplorerCapable( _INetGetSource( _INetMail( _INetSmtpMail( _IsPressed( _Max( "
"_MemGlobalAlloc( _MemGlobalFree( _MemGlobalLock( _MemGlobalReAlloc( _MemGlobalSize( _MemGlobalUnlock( _MemMoveMemory( "
"_MemVirtualAlloc( _MemVirtualAllocEx( _MemVirtualFree( _MemVirtualFreeEx( _Min( _MouseTrap( "
"_NamedPipes_CallNamedPipe( _NamedPipes_ConnectNamedPipe( _NamedPipes_CreateNamedPipe( _NamedPipes_CreatePipe( "
"_NamedPipes_DisconnectNamedPipe( _NamedPipes_GetNamedPipeHandleState( _NamedPipes_GetNamedPipeInfo( "
"_NamedPipes_PeekNamedPipe( _NamedPipes_SetNamedPipeHandleState( _NamedPipes_TransactNamedPipe( "
"_NamedPipes_WaitNamedPipe( _Net_Share_ConnectionEnum( "
"_Net_Share_FileClose( _Net_Share_FileEnum( _Net_Share_FileGetInfo( _Net_Share_PermStr( _Net_Share_ResourceStr( "
"_Net_Share_SessionDel( _Net_Share_SessionEnum( _Net_Share_SessionGetInfo( _Net_Share_ShareAdd( _Net_Share_ShareCheck( "
"_Net_Share_ShareDel( _Net_Share_ShareEnum( _Net_Share_ShareGetInfo( _Net_Share_ShareSetInfo( "
"_Net_Share_StatisticsGetSvr( _Net_Share_StatisticsGetWrk( _Now( _NowCalc( _NowCalcDate( _NowDate( _NowTime( "
"_PathFull( _PathGetRelative( _PathMake( _PathSplit( _ProcessGetName( _ProcessGetPriority( "
"_Radian( _ReplaceStringInFile( _RunDos( _ScreenCapture_Capture( _ScreenCapture_CaptureWnd( _ScreenCapture_SaveImage( "
"_ScreenCapture_SetBMPFormat( _ScreenCapture_SetJPGQuality( "
"_ScreenCapture_SetTIFColorDepth( _ScreenCapture_SetTIFCompression( _Security__AdjustTokenPrivileges( "
"_Security__CreateProcessWithToken( _Security__DuplicateTokenEx( "
"_Security__GetAccountSid( _Security__GetLengthSid( _Security__GetTokenInformation( "
"_Security__ImpersonateSelf( _Security__IsValidSid( "
"_Security__LookupAccountName( _Security__LookupAccountSid( _Security__LookupPrivilegeValue( "
"_Security__OpenProcessToken( _Security__OpenThreadToken( _Security__OpenThreadTokenEx( "
"_Security__SetPrivilege( _Security__SetTokenInformation( _Security__SidToStringSid( _Security__SidTypeStr( "
"_Security__StringSidToSid( _SendMessage( _SendMessageA( _SetDate( _SetTime( _Singleton( _SoundClose( _SoundLength( "
"_SoundOpen( _SoundPause( _SoundPlay( _SoundPos( _SoundResume( _SoundSeek( _SoundStatus( _SoundStop( "
"_SQLite_Changes( _SQLite_Close( _SQLite_Display2DResult( "
"_SQLite_Encode( _SQLite_ErrCode( _SQLite_ErrMsg( _SQLite_Escape( _SQLite_Exec( "
"_SQLite_FastEncode( _SQLite_FastEscape( _SQLite_FetchData( _SQLite_FetchNames( "
"_SQLite_GetTable( _SQLite_GetTable2D( _SQLite_GetTableData2D( _SQLite_LastInsertRowID( _SQLite_LibVersion( "
"_SQLite_Open( _SQLite_Query( _SQLite_QueryFinalize( _SQLite_QueryReset( _SQLite_QuerySingleRow( "
"_SQLite_SafeMode( _SQLite_SetTimeout( _SQLite_Shutdown( _SQLite_SQLiteExe( _SQLite_Startup( _SQLite_TotalChanges( "
"_StringBetween( _StringExplode( _StringInsert( _StringProper( _StringRepeat( _StringTitleCase( _StringToHex( "
"_TCPIpToName( _TempFile( _TicksToTime( _Timer_Diff( _Timer_GetIdleTime( _Timer_GetTimerID( _Timer_Init( "
"_Timer_KillAllTimers( _Timer_KillTimer( _Timer_SetTimer( _TimeToTicks( _VersionCompare( _viClose( _viExecCommand( "
"_viFindGpib( _viGpibBusReset( _viGTL( _viInteractiveControl( _viOpen( _viSetAttribute( _viSetTimeout( _WeekNumberISO( "
"_WinNet_AddConnection( _WinNet_AddConnection2( _WinNet_AddConnection3( "
"_WinNet_CancelConnection( _WinNet_CancelConnection2( _WinNet_CloseEnum( "
"_WinNet_ConnectionDialog( _WinNet_ConnectionDialog1( _WinNet_DisconnectDialog( _WinNet_DisconnectDialog1( "
"_WinNet_EnumResource( _WinNet_GetConnection( _WinNet_GetConnectionPerformance( _WinNet_GetLastError( "
"_WinNet_GetNetworkInformation( _WinNet_GetProviderName( _WinNet_GetResourceInformation( _WinNet_GetResourceParent( "
"_WinNet_GetUniversalName( _WinNet_GetUser( _WinNet_OpenEnum( _WinNet_RestoreConnection( _WinNet_UseConnection( "
"_Word_Create( _Word_DocAdd( _Word_DocAttach( _Word_DocClose( _Word_DocExport( _Word_DocFind( _Word_DocFindReplace( "
"_Word_DocGet( _Word_DocLinkAdd( _Word_DocLinkGet( _Word_DocOpen( _Word_DocPictureAdd( _Word_DocPrint( "
"_Word_DocRangeSet( _Word_DocSave( _Word_DocSaveAs( _Word_DocTableRead( _Word_DocTableWrite( _Word_Quit( "

, // 7 user defined functions 2
nullptr

, // 8 user defined functions 3
nullptr

, // 9 misc
"CaretCoordMode ExpandEnvStrings ExpandVarStrings "
"GUICloseOnESC GUICoordMode GUIDataSeparatorChar GUIEventOptions GUIOnEventMode GUIResizeMode "
"MouseClickDelay MouseClickDownDelay MouseClickDragDelay MouseCoordMode MustDeclareVars PixelCoordMode "
"SendAttachMode SendCapslockMode SendKeyDelay SendKeyDownDelay SetExitCode "
"TCPTimeout TrayAutoPause TrayIconDebug TrayIconHide TrayMenuMode TrayOnEventMode "
"WinDetectHiddenText WinSearchChildren WinTextMatchMode WinTitleMatchMode WinWaitDelay "

, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_AU3[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_AU3_KEYWORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ MULTI_STYLE(SCE_AU3_PREPROCESSOR, SCE_AU3_SPECIAL, 0, 0), NP2StyleX_Directive, L"fore:#FF8000" },
	{ MULTI_STYLE(SCE_AU3_FUNCTION, SCE_AU3_UDF, 0, 0), NP2StyleX_Function, L"fore:#A46000" },
	{ SCE_AU3_MACRO, NP2StyleX_Macro, L"fore:#0080FF" },
	{ SCE_AU3_VARIABLE, NP2StyleX_Variable, L"fore:#808000" },
	{ MULTI_STYLE(SCE_AU3_COMMENT, SCE_AU3_COMMENTBLOCK, 0, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ SCE_AU3_STRING, NP2StyleX_String, L"fore:#008080" },
	{ SCE_AU3_SENT, NP2StyleX_SendKey, L"fore:#8080FF" },
	{ SCE_AU3_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_AU3_OPERATOR, NP2StyleX_Operator, L"fore:#C000C0" },
};

EDITLEXER lexAutoIt3 = {
	SCLEX_AUTOIT3, NP2LEX_AUTOIT3,
//Settings++Autogenerated -- start of section automatically generated
		LexerAttr_Default,
		TAB_WIDTH_4, INDENT_WIDTH_4,
		(1 << 0) | (1 << 1), // level1, level2
		0,
		'\\', 0, 0,
		0,
		0, 0,
		SCE_AU3_OPERATOR, 0
		, KeywordAttr32(0, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // keywords
		| KeywordAttr32(1, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // functions
		| KeywordAttr32(2, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // macros
		| KeywordAttr32(3, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // sent keys
		| KeywordAttr32(4, KeywordAttr_MakeLower | KeywordAttr_PreSorted | KeywordAttr_NoAutoComp) // directives
		| KeywordAttr32(5, KeywordAttr_MakeLower | KeywordAttr_PreSorted | KeywordAttr_NoAutoComp) // special
		| KeywordAttr32(6, KeywordAttr_MakeLower | KeywordAttr_PreSorted) // user defined functions
		| KeywordAttr64(7, KeywordAttr_NoLexer) // user defined functions 2
		| KeywordAttr64(8, KeywordAttr_NoLexer) // user defined functions 3
		| KeywordAttr64(9, KeywordAttr_NoLexer) // misc
		, SCE_AU3_COMMENTBLOCK,
		SCE_AU3_STRING, SCE_AU3_STRING,
//Settings--Autogenerated -- end of section automatically generated
	EDITLEXER_HOLE(L"AutoIt3 Script", Styles_AU3),
	L"au3",
	&Keywords_AU3,
	Styles_AU3
};
