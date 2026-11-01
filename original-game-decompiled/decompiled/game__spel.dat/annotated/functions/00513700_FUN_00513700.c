
/* ==== FUN_00513700 @ 00513700 ==== 
 * signature: undefined4 __fastcall FUN_00513700(void * param_1)
 * body: 00513700-00513727
 */

undefined4 __fastcall FUN_00513700(void *param_1)

{
  FUN_005135a0(param_1,*(int *)(*(int *)((int)param_1 + 0x1c) + 4 +
                               (uint)*(ushort *)(*(int *)((int)param_1 + 0x1c) + 2) * 8));
  *(undefined2 *)(*(int *)((int)param_1 + 0x1c) + 2) = 0;
  return 1;
}


