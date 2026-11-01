
/* ==== FUN_004225d0 @ 004225d0 ==== 
 * signature: int __cdecl FUN_004225d0(int param_1)
 * body: 004225d0-00422678
 */

int __cdecl FUN_004225d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00422070(param_1);
  if (-1 < iVar2) {
    return -2;
  }
  iVar3 = FUN_004220a0();
  iVar2 = DAT_00715e50;
  if (-1 < iVar3) {
    (&DAT_005d3328)[iVar3 * 6] = param_1;
    iVar1 = DAT_006fb954;
    (&DAT_005d332c)[iVar3 * 6] = *(undefined4 *)(param_1 * 0xf0 + 0x34 + iVar2);
    (&DAT_005d3338)[iVar3 * 6] = 1;
    if (iVar1 != 1) {
      (&DAT_005d333c)[iVar3 * 6] = 1;
      iVar2 = FUN_004aac20((&DAT_005d3328)[iVar3 * 6],1);
      (&DAT_005d3330)[iVar3 * 6] = iVar2;
      return iVar3;
    }
    (&DAT_005d333c)[iVar3 * 6] = 0xffffffff;
    iVar2 = FUN_004aac20((&DAT_005d3328)[iVar3 * 6],0);
    (&DAT_005d3330)[iVar3 * 6] = iVar2;
  }
  return iVar3;
}


