
/* ==== FUN_0044bfc0 @ 0044bfc0 ==== 
 * signature: undefined __stdcall FUN_0044bfc0(void)
 * body: 0044bfc0-0044c02e
 */

void FUN_0044bfc0(void)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  
  if (DAT_006fb890 == 0) {
    FUN_004b7400(&DAT_00712130,s_LORADAR_PCX_005a1310);
  }
  else if (DAT_006fb890 == 1) {
    FUN_004b7400(&DAT_00712130,s_HIRADAR_PCX_005a131c);
  }
  piVar2 = (int *)FUN_004c4a80(0x10,0x10);
  bVar1 = FUN_004c9b90(piVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    DAT_006fb8c8 = 0;
  }
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}


