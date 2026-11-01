
/* ==== FUN_0043caf0 @ 0043caf0 ==== 
 * signature: undefined4 __stdcall FUN_0043caf0(void)
 * body: 0043caf0-0043cb0b
 */

undefined4 FUN_0043caf0(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  switch(DAT_006c4080) {
  case 0:
    FUN_004b1210((void *)(DAT_00719b50 + DAT_006c3528 * 0x178),(&DAT_006c3bac)[DAT_006c407c * 3],
                 (&DAT_006c3bb0)[DAT_006c407c * 3],(&DAT_006c3bb4)[DAT_006c407c * 3]);
    DAT_006c407c = DAT_006c407c + 1;
    if (DAT_006c4078 <= DAT_006c407c) {
      FUN_0043cab0();
      return 0;
    }
    break;
  case 1:
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
    break;
  case 2:
    FUN_004b1210((void *)(DAT_00719b50 + DAT_006c3528 * 0x178),(&DAT_006c3bac)[DAT_006c407c * 3],
                 (&DAT_006c3bb0)[DAT_006c407c * 3],(&DAT_006c3bb4)[DAT_006c407c * 3]);
    DAT_006c407c = DAT_006c407c + -2;
    if (DAT_006c407c < 0) {
      return 1;
    }
    break;
  case 3:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__Illegal_mode_for_fuel_st_0059a894);
  }
  return 0;
}


