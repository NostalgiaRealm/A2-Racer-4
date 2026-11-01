
/* ==== FUN_00407dc4 @ 00407dc4 ==== 
 * signature: undefined4 __register FUN_00407dc4(undefined * param_1)
 * body: 00407dc4-00407e2b
 */

undefined4 FUN_00407dc4(undefined *param_1)

{
  LPCSTR lpFileName;
  HANDLE hFindFile;
  BOOL BVar1;
  _WIN32_FIND_DATAA *lpFindFileData;
  _WIN32_FIND_DATAA local_150;
  _FILETIME local_10;
  undefined4 local_8;
  
  lpFindFileData = &local_150;
  lpFileName = FUN_00403dfc(param_1);
  hFindFile = FindFirstFileA(lpFileName,lpFindFileData);
  if ((hFindFile != (HANDLE)0xffffffff) &&
     (FindClose(hFindFile), ((byte)local_150.dwFileAttributes & 0x10) == 0)) {
    FileTimeToLocalFileTime(&local_150.ftLastWriteTime,&local_10);
    BVar1 = FileTimeToDosDateTime(&local_10,(LPWORD)((int)&local_8 + 2),(LPWORD)&local_8);
    if (BVar1 != 0) {
      return local_8;
    }
  }
  return 0xffffffff;
}


