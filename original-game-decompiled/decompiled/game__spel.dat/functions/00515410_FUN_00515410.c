
/* ==== FUN_00515410 @ 00515410 ==== 
 * signature: undefined __stdcall FUN_00515410(void)
 * body: 00515410-00515519
 */

void FUN_00515410(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar4 = FUN_00514af0(DAT_0074c6f0);
  puVar3 = DAT_0074c610;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_deletevisible__delete__d_visi_005ba4ac);
    puVar3 = DAT_0074c610;
  }
  while ((puVar3 != (undefined4 *)0x0 && ((puVar3[0x14] & 0x400) != 0))) {
    puVar1 = (undefined4 *)puVar3[0xc];
    iVar6 = iVar6 + 1;
    FUN_005152b0(puVar3);
    puVar3 = puVar1;
  }
  if (iVar6 != DAT_0074c614) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_deletev_005ba44c);
    FUN_0051e8e0(5,(int *)0x0);
  }
  DAT_0074cdb0 = DAT_0074cdb0 + iVar6;
  DAT_0074c614 = 0;
  if (DAT_0074cdb8 < iVar6) {
    DAT_0074cdb8 = iVar6;
  }
  DAT_0074c938 = DAT_0074c938 + iVar4;
  if (DAT_0074c940 < iVar4) {
    DAT_0074c940 = iVar4;
  }
  if (DAT_0074c6f0 != (int *)0x0) {
    piVar5 = DAT_0074c6f0 + 1;
    piVar2 = (int *)DAT_0074c6f0[1];
    while (piVar2 != (int *)0x0) {
      piVar5 = piVar5 + 1;
      FUN_005182a0(piVar2);
      piVar2 = (int *)*piVar5;
    }
  }
  FUN_00514d30(DAT_0074c6f0,0);
  return;
}


