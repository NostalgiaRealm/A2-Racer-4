
/* ==== FUN_00524a80 @ 00524a80 ==== 
 * signature: undefined __stdcall FUN_00524a80(void)
 * body: 00524a80-00524d06
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00524a80(void)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  uint uVar4;
  int *in_stack_fffffff0;
  
  uVar2 = FUN_00559348();
  DAT_0074c650 = (int)uVar2;
  if ((DAT_0074bfc4 != 0) || (_DAT_0074c668 < 8.988465674311579e+307)) {
    FUN_005251c0();
  }
  else {
    FUN_00518ad0();
    FUN_005253d0(in_stack_fffffff0);
  }
  if ((DAT_0074bfe8 != 0) || (DAT_0074bfe4 != 0)) goto LAB_00524c74;
  if (DAT_0074c6d8 != 0) {
    if ((DAT_0074bfec == 0) && (DAT_0074be90 != 0)) {
      FUN_005346b0(1);
    }
    if (((DAT_0074c6d8 != 0) && (DAT_0074bfec == 0)) && (DAT_0074c6dc == 0)) {
      if (1 < DAT_0074be68) {
        FUN_00558953(DAT_0074c5ec,(byte *)s_qh_qhull__all_facets_are_clearly_005c0938);
      }
      goto LAB_00524c74;
    }
  }
  if ((DAT_0074be90 == 0) && ((DAT_0074c03c < 6 || (DAT_0074bed8 == 0)))) {
    if (DAT_0074bed4 != 0) goto LAB_00524bd9;
    if (DAT_0074bfec != 0) {
      uVar4 = 1;
      pcVar3 = s_For_testing_vertex_neighbors_005c0918;
      goto LAB_00524bc3;
    }
  }
  else {
    uVar4 = ~-(uint)(DAT_0074bed4 != 0) & DAT_0074bfec;
    pcVar3 = s_First_post_merge_005c0904;
LAB_00524bc3:
    FUN_00534030(pcVar3,DAT_0074bea0,DAT_0074bea4,DAT_0074be30,DAT_0074be34,uVar4);
    if (DAT_0074bed4 != 0) {
LAB_00524bd9:
      FUN_00534030(s_For_post_merging_005c08f0,DAT_0074bea8,DAT_0074beac,DAT_0074be38,DAT_0074be3c,
                   DAT_0074bfec);
    }
  }
  if (DAT_0074c610 == DAT_0074c600) {
    DAT_0074c694 = 1;
    FUN_00526820(0,(int *)&stack0xfffffff4);
    DAT_0074c694 = 0;
    FUN_00515410();
    FUN_0051a5a0(0);
  }
  if (DAT_0074c028 != 0) {
    if (DAT_0074bfbc != 0) {
      FUN_005255c0((double *)0x0,0);
      FUN_00558953(DAT_0074c5ec,(byte *)s_Testing_all_coplanar_points__005c08d0);
    }
    FUN_005168b0();
  }
LAB_00524c74:
  if ((DAT_0074c038 != 0) && (DAT_0074c670 == 0)) {
    FUN_00519c40();
  }
  iVar1 = FUN_00514af0(DAT_0074c780);
  if (iVar1 != 0) {
    FUN_00514af0(DAT_0074c780);
    FUN_00558953(DAT_0074c5ec,(byte *)s_qhull_internal_error__qh_qhull___005c0890);
    FUN_0051e8e0(5,(int *)0x0);
  }
  uVar2 = FUN_00559348();
  DAT_0074c6bc = 1;
  DAT_0074c650 = (int)uVar2 - DAT_0074c650;
  if (0 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_qhull__algorithm_completed_005c0870);
  }
  return;
}


