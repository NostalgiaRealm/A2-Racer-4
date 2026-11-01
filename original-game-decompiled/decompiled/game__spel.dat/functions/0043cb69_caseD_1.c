
/* ==== switchD_0043cb05::caseD_1 @ 0043cb69 ==== 
 * signature: undefined4 __stdcall caseD_1(void)
 * body: 0043cb69-0043cbe3
 */

undefined4 switchD_0043cb05::caseD_1(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
  iVar2 = FUN_00425300(iVar2);
  if (iVar2 < 1) {
    DAT_006c4080 = 2;
    return 0;
  }
  bVar1 = FUN_004486a0(2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = FUN_00426f60(&DAT_005d3460,DAT_006fba58);
    iVar2 = FUN_00425300(iVar2);
    FUN_00427110(&DAT_005d3460,DAT_006fba58,iVar2 - 0x6e);
    FUN_00448570(2,200);
    return 0;
  }
  return 0;
}


