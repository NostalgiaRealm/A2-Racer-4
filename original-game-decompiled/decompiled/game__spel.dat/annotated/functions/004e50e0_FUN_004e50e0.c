
/* ==== FUN_004e50e0 @ 004e50e0 ==== 
 * signature: undefined __stdcall FUN_004e50e0(undefined4 param_1, int param_2, void * param_3, void * param_4)
 * body: 004e50e0-004e51c2;004e52cf-004e52ea;004e5455-004e5477
 */

void FUN_004e50e0(undefined4 param_1,int param_2,void *param_3,void *param_4)

{
  undefined1 *puVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58 [2];
  undefined1 local_44 [16];
  undefined1 local_34 [32];
  void *pvStack_14;
  code *pcStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  pcStack_10 = FUN_00571b3f;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004028f0(local_34,'\0');
  local_c = 1;
  FUN_004028f0(local_44,'\0');
  local_c._0_1_ = 2;
  if (*(int *)((int)param_3 + 8) == 1) {
    local_58[0] = *(undefined8 *)((int)param_3 + 0x10);
    local_68 = *(undefined4 *)((int)param_4 + 0x10);
    local_64 = *(undefined4 *)((int)param_4 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x004e5471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_FUN_004e55e8)[param_2 + -1])();
    return;
  }
  if (*(int *)((int)param_3 + 8) != 2) {
    puVar1 = FUN_00479930(param_4,(undefined1 *)local_58);
    local_c._0_1_ = 3;
    FUN_004093c0(local_44,puVar1,0,0xffffffff);
    local_c._0_1_ = 2;
    FUN_004028f0(local_58,'\x01');
    puVar1 = FUN_00479930(param_3,(undefined1 *)&local_68);
    local_c._0_1_ = 4;
    FUN_004093c0(local_34,puVar1,0,0xffffffff);
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_004028f0(&local_68,'\x01');
                    /* WARNING: Could not recover jumptable at 0x004e51bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_004e5580 + (param_2 + -1) * 4))();
    return;
  }
  local_68 = *(undefined4 *)((int)param_3 + 0x10);
  local_58[0] = CONCAT44(local_58[0]._4_4_,*(undefined4 *)((int)param_4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x004e52e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_FUN_004e55a8)[param_2 + -1])();
  return;
}


