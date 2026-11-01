
/* ==== ___timet_from_ft @ 005591e8 ==== 
 * signature: int __cdecl ___timet_from_ft(FILETIME * param_1)
 * body: 005591e8-0055924b
 * note: Library Function - Single Match  ___timet_from_ft  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    ___timet_from_ft
   
   Library: Visual Studio 2003 Release */

int __cdecl ___timet_from_ft(FILETIME *param_1)

{
  BOOL BVar1;
  int iVar2;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  if ((param_1->dwLowDateTime != 0) || (param_1->dwHighDateTime != 0)) {
    BVar1 = FileTimeToLocalFileTime(param_1,&local_c);
    if (BVar1 != 0) {
      BVar1 = FileTimeToSystemTime(&local_c,&local_1c);
      if (BVar1 != 0) {
        iVar2 = FUN_00560a8e((uint)local_1c.wYear,(uint)local_1c.wMonth,(uint)local_1c.wDay,
                             (uint)local_1c.wHour,(uint)local_1c.wMinute,(uint)local_1c.wSecond,-1);
        return iVar2;
      }
    }
  }
  return -1;
}


