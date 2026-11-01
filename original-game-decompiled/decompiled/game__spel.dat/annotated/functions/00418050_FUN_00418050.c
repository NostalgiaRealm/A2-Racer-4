
/* ==== FUN_00418050 @ 00418050 ==== 
 * signature: int __cdecl FUN_00418050(int param_1, int param_2)
 * body: 00418050-004180ff
 */

/* WARNING: Variable defined which should be unmapped: param_2 */

int __cdecl FUN_00418050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 * 0x50 + 4 + DAT_00715eb8) == 2) {
    iVar3 = param_1 * 0xf0;
    iVar2 = *(int *)(iVar3 + 0x34 + DAT_00715e50);
    if (*(int *)(iVar3 + 0x50 + DAT_00715e50) == 0) {
      iVar2 = *(int *)(DAT_00715f00 + 0xf4 + iVar2 * 0x994);
    }
    else {
      iVar2 = *(int *)(DAT_00715f00 + 0xf8 + iVar2 * 0x994);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = FUN_004a6d70(*(int *)(iVar3 + 0x34 + DAT_00715e50),iVar4,
                             *(int *)(iVar3 + 0x50 + DAT_00715e50));
        if (*(int *)(iVar1 * 0x50 + 4 + DAT_00715eb8) != 2) {
          return param_2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
  }
  return param_2;
}


