
/* ==== FUN_00422f70 @ 00422f70 ==== 
 * signature: int __cdecl FUN_00422f70(int param_1, int param_2, int param_3, int param_4)
 * body: 00422f70-00423031
 */

int __cdecl FUN_00422f70(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    iVar1 = *(int *)(param_2 * 0x50 + 0x18 + DAT_00715eb8);
    if (iVar1 != -1) {
      uVar2 = FUN_00422f20(param_1,iVar1,param_4);
      if ((char)uVar2 == '\x01') {
        return iVar1;
      }
    }
  }
  else if (param_3 == 1) {
    iVar1 = *(int *)(param_2 * 0x50 + 0x14 + DAT_00715eb8);
    if (iVar1 != -1) {
      uVar3 = FUN_00422d90(param_1,iVar1);
      if ((char)uVar3 == '\x01') {
        return iVar1;
      }
    }
  }
  else if ((param_3 == 2) && (iVar1 = *(int *)(param_2 * 0x50 + 0x1c + DAT_00715eb8), iVar1 != -1))
  {
    uVar2 = FUN_00422f20(param_1,iVar1,param_4);
    if ((char)uVar2 == '\x01') {
      return iVar1;
    }
  }
  return -1;
}


