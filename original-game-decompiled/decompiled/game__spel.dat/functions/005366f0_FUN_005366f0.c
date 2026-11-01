
/* ==== FUN_005366f0 @ 005366f0 ==== 
 * signature: undefined __cdecl FUN_005366f0(int * param_1, int * param_2)
 * body: 005366f0-005368da
 */

void __cdecl FUN_005366f0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int local_4;
  
  local_4 = 0;
  if (DAT_0074c460 == 0) {
    FUN_0051a750();
  }
  DAT_0074cd50 = DAT_0074cd50 + 1;
  if (((DAT_0074bfc0 != 0) && (DAT_0074c6b0 != 0)) && (DAT_0074c734 + DAT_0074bfc0 < DAT_0074cd50))
  {
    FUN_00539270();
  }
  if (DAT_0074c008 == DAT_0074cd50) {
    DAT_0074be68 = DAT_0074bff0;
    DAT_0074c788 = DAT_0074bff0;
  }
  if (1 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle__merge___d_for_fac_005c61c0);
  }
  bVar3 = param_2 == DAT_0074c61c;
  if (bVar3) {
    local_4 = DAT_0074be68;
    DAT_0074be68 = 4;
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle____________trace_m_005c6164);
  }
  if (3 < DAT_0074be68) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_same_cycle__005c6154);
    for (piVar1 = (int *)param_1[8];
        (piVar1 != (int *)0x0 && (FUN_00558953(DAT_0074c5ec,&DAT_005c39a4), piVar1 != param_1));
        piVar1 = (int *)piVar1[8]) {
    }
    FUN_00558953(DAT_0074c5ec,&DAT_005ae60c);
    if (3 < DAT_0074be68) {
      FUN_0051eb30(s_MERGING_CYCLE_005c6144,(uint)param_1,(uint)param_2,(int *)0x0,0);
    }
  }
  iVar2 = *(int *)(param_1[0xd] + 4);
  FUN_00535cf0((int)param_2);
  FUN_00536bd0(param_1,(int)param_2);
  FUN_00536e20((int)param_1,(int)param_2);
  FUN_00537100((int)param_1,(int)param_2);
  if (*(int *)(param_2[0xd] + 4) != iVar2) {
    FUN_00513f70(param_2 + 0xd,0,iVar2);
  }
  if ((param_2[0x14] & 0x200U) == 0) {
    FUN_00538350(param_2[0xd]);
  }
  FUN_00536b00((uint)param_1,(int)param_2);
  FUN_00539120(param_1,param_2);
  if (bVar3) {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_mergecycle__end_of_trace_face_005c6120);
    DAT_0074be68 = local_4;
  }
  return;
}


