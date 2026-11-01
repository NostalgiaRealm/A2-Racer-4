
/* ==== FUN_004993d4 @ 004993d4 ==== 
 * signature: undefined FUN_004993d4(void)
 * body: 004993d4-00499440
 */

void FUN_004993d4(int param_1,uint param_2)

{
  *(char *)(param_1 + 0x34c) = (char)param_2;
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x318),
               (undefined4 *)&UNK_0049944c,param_2 & 0x7f);
  FUN_00489e40(*(int **)(*(int *)PTR_DAT_004ab694 + 0xb4),*(int **)(param_1 + 0x2dc),
               (undefined4 *)"TUNEUP",(uint)*(byte *)(param_1 + 0x34c));
  FUN_00499464(param_1);
  FUN_004996a0(param_1);
  FUN_00499600(param_1);
  return;
}


