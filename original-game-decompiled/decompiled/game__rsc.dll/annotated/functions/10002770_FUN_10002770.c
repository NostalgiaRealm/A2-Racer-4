
/* ==== FUN_10002770 @ 10002770 ==== 
 * signature: undefined4 __cdecl FUN_10002770(uint param_1)
 * body: 10002770-10002847
 */

undefined4 __cdecl FUN_10002770(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  int iVar4;
  
  if (((param_1 < DAT_10031bfc) &&
      (iVar4 = (int)param_1 >> 5,
      (*(byte *)((&DAT_10031ac0)[iVar4] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) &&
     (*(int *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24) != -1)) {
    if (DAT_10031428 == 1) {
      if (param_1 == 0) {
        SetStdHandle(0xfffffff6,(HANDLE)0x0);
      }
      else if (param_1 == 1) {
        SetStdHandle(0xfffffff5,(HANDLE)0x0);
      }
      else if (param_1 == 2) {
        SetStdHandle(0xfffffff4,(HANDLE)0x0);
      }
    }
    *(undefined4 *)((&DAT_10031ac0)[iVar4] + (param_1 & 0x1f) * 0x24) = 0xffffffff;
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_10006f20();
    *puVar2 = 9;
    pDVar3 = FUN_10006f30();
    *pDVar3 = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


