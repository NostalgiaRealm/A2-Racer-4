
/* ==== FUN_00568263 @ 00568263 ==== 
 * signature: int __cdecl FUN_00568263(uint param_1, int param_2)
 * body: 00568263-005683a8
 */

int __cdecl FUN_00568263(uint param_1,int param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  HANDLE hFile;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  char local_1004 [4060];
  undefined4 uStackY_28;
  
  FUN_00559400();
  iVar7 = 0;
  if ((param_1 < DAT_007501a0) &&
     ((*(byte *)((&DAT_007500a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    DVar1 = FUN_00562b76(param_1,0,1);
    if ((DVar1 != 0xffffffff) && (DVar2 = FUN_00562b76(param_1,0,2), DVar2 != 0xffffffff)) {
      uVar8 = param_2 - DVar2;
      if ((int)uVar8 < 1) {
        if ((int)uVar8 < 0) {
          FUN_00562b76(param_1,param_2,0);
          hFile = (HANDLE)FUN_0055a27d(param_1);
          BVar6 = SetEndOfFile(hFile);
          iVar7 = (BVar6 != 0) - 1;
          if (iVar7 == -1) {
            DAT_0074dc60 = 0xd;
            DAT_0074dc64 = GetLastError();
          }
        }
      }
      else {
        _memset(local_1004,0,0x1000);
        uStackY_28 = 0x5682f3;
        iVar3 = FUN_00568914(param_1,0x8000);
        do {
          uVar4 = 0x1000;
          if ((int)uVar8 < 0x1000) {
            uVar4 = uVar8;
          }
          iVar5 = FUN_0055fe30(param_1,local_1004,uVar4);
          if (iVar5 == -1) {
            if (DAT_0074dc64 == 5) {
              DAT_0074dc60 = 0xd;
            }
            iVar7 = -1;
            break;
          }
          uVar8 = uVar8 - iVar5;
        } while (0 < (int)uVar8);
        FUN_00568914(param_1,iVar3);
      }
      FUN_00562b76(param_1,DVar1,0);
      return iVar7;
    }
  }
  else {
    DAT_0074dc60 = 9;
  }
  return -1;
}


