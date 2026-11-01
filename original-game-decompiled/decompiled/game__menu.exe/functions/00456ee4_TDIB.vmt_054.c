
/* ==== TDIB.vmt_054 @ 00456ee4 ==== 
 * signature: undefined __register TDIB.vmt_054(int * param_1, int * param_2)
 * body: 00456ee4-00456f49
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TDIB_vmt_054(int *param_1,int *param_2)

{
  char cVar1;
  undefined2 local_12;
  int local_10;
  undefined2 local_c;
  undefined2 local_a;
  int local_8;
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    local_12 = 0x4d42;
    local_8 = FUN_004567f8((int)param_1);
    local_8 = local_8 + 0xe;
    local_10 = *(int *)(*(int *)(param_1[9] + 0xc) + 0x14) + local_8;
    local_c = 0;
    local_a = 0;
    FUN_004126f0(param_2,&local_12,0xe);
    (**(code **)(*param_1 + 0x44))(param_1,param_2);
  }
  return;
}


