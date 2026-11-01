
/* ==== FUN_0052cb70 @ 0052cb70 ==== 
 * signature: undefined __stdcall FUN_0052cb70(void)
 * body: 0052cb70-0052cd66
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052cb70(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = FUN_00514af0(DAT_0074c780);
  if (DAT_0074c018 != 0) {
    FUN_00518040(1);
    FUN_0051a750();
  }
  if (DAT_0074c034 != 0) {
    FUN_0052a8f0((int)DAT_0074c600);
  }
  FUN_00518700((int)DAT_0074c600);
  if (((DAT_0074be6c != 0) || (DAT_0074be78 != 0)) || (_DAT_0074be80 < 8.988465674311579e+307)) {
    FUN_0052dd40((int)DAT_0074c600);
  }
  piVar4 = DAT_0074c5ec;
  if ((DAT_0074bf84 != 0) || (piVar4 = DAT_0074c5e8, DAT_0074bf08 == 0)) {
    FUN_00526a80(piVar4);
  }
  puVar3 = &DAT_0074bf08;
  do {
    FUN_00531c60(DAT_0074c5e8,(int *)*puVar3,DAT_0074c600,(int *)0x0,(int *)0x0);
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x74bf78);
  FUN_00523ec0();
  if (((DAT_0074bf04 != 0) && (DAT_0074be98 == 0)) &&
     ((8.988465674311579e+307 < _DAT_0074c668 || (DAT_0074bfc4 != 0)))) {
    FUN_005249f0(DAT_0074c5ec,DAT_0074d50c,(int *)0x0);
  }
  if ((DAT_0074c010 != 0) && ((0 < DAT_0074ccc8 || (0 < DAT_0074ccf8)))) {
    FUN_005249f0(DAT_0074c5ec,DAT_0074d510,(int *)0x0);
  }
  if (DAT_0074bf80 != 0) {
    FUN_00523ee0();
    FUN_005245d0(DAT_0074c5ec);
    FUN_0051e670(DAT_0074c5ec);
    FUN_00558953(DAT_0074c5ec,(byte *)s_size_in_bytes__hashentry__d_merg_005c2ee0);
  }
  iVar2 = FUN_00514af0(DAT_0074c780);
  if (iVar2 != iVar1) {
    FUN_00514af0(DAT_0074c780);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_produce_005c2e94);
    FUN_0051e8e0(5,(int *)0x0);
  }
  return;
}


