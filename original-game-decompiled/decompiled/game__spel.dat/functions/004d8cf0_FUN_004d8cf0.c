
/* ==== FUN_004d8cf0 @ 004d8cf0 ==== 
 * signature: int * __thiscall FUN_004d8cf0(void * this, int * param_1, undefined4 param_2, char * param_3, char * param_4, undefined4 param_5, undefined4 param_6, char * param_7, char * param_8, undefined4 param_9, undefined4 param_10, int param_11, char * param_12, undefined4 param_13, undefined4 param_14, int param_15, char * param_16, undefined4 param_17, undefined4 param_18, int param_19, char * param_20, undefined4 param_21, undefined4 param_22, int param_23, char * param_24, undefined4 param_25, undefined4 param_26, int param_27, char * param_28, undefined4 param_29, undefined4 param_30, int param_31, char * param_32)
 * body: 004d8cf0-004d8eff
 */

int * __thiscall
FUN_004d8cf0(void *this,int *param_1,undefined4 param_2,char *param_3,char *param_4,
            undefined4 param_5,undefined4 param_6,char *param_7,char *param_8,undefined4 param_9,
            undefined4 param_10,int param_11,char *param_12,undefined4 param_13,undefined4 param_14,
            int param_15,char *param_16,undefined4 param_17,undefined4 param_18,int param_19,
            char *param_20,undefined4 param_21,undefined4 param_22,int param_23,char *param_24,
            undefined4 param_25,undefined4 param_26,int param_27,char *param_28,undefined4 param_29,
            undefined4 param_30,int param_31,char *param_32)

{
  int *piVar1;
  int iVar2;
  char *unaff_EDI;
  char *unaff_retaddr;
  char *pcVar3;
  uint uStack00000084;
  undefined4 uStack00000088;
  char *pcVar4;
  
  FUN_0055924c((int *)((int)this + 0x2c));
  piVar1 = FUN_004d4cd0(param_1,s_Compilationtime_005b7234);
  piVar1 = FUN_004d4cd0(piVar1,unaff_EDI);
  FUN_004d4cd0(piVar1,unaff_retaddr);
  pcVar3 = &DAT_005b159c;
  pcVar4 = (char *)((*(int *)((int)this + 0x28) % 100) / 10);
  piVar1 = FUN_004d4cd0(param_1,s_Compiler_version_005b7220);
  piVar1 = FUN_004d4130(piVar1,pcVar4);
  piVar1 = FUN_004d4cd0(piVar1,pcVar3);
  piVar1 = FUN_004d4130(piVar1,param_3);
  piVar1 = FUN_004d4cd0(piVar1,param_4);
  piVar1 = FUN_004d4130(piVar1,param_7);
  FUN_004d4cd0(piVar1,param_8);
  piVar1 = FUN_004d4cd0(param_1,s_Classes__005b7214);
  piVar1 = FUN_004da280(piVar1,param_11);
  FUN_004d4cd0(piVar1,param_12);
  piVar1 = FUN_004d4cd0(param_1,s_Global_funcs__005b7204);
  piVar1 = FUN_004da280(piVar1,param_15);
  FUN_004d4cd0(piVar1,param_16);
  piVar1 = FUN_004d4cd0(param_1,s_Globals__005b71f8);
  piVar1 = FUN_004da280(piVar1,param_19);
  FUN_004d4cd0(piVar1,param_20);
  piVar1 = FUN_004d4cd0(param_1,s_Ext_vars__005b71ec);
  piVar1 = FUN_004da280(piVar1,param_23);
  FUN_004d4cd0(piVar1,param_24);
  piVar1 = FUN_004d4cd0(param_1,s_Const_objs__005b71dc);
  piVar1 = FUN_004da280(piVar1,param_27);
  FUN_004d4cd0(piVar1,param_28);
  piVar1 = FUN_004d4cd0(param_1,s_Consts__005b71d0);
  piVar1 = FUN_004da280(piVar1,param_31);
  FUN_004d4cd0(piVar1,param_32);
  uStack00000084 = 0;
  if ((*(byte *)(*(int *)(*param_1 + 4) + 4 + (int)param_1) & 6) == 0) {
    uStack00000088 = 0x4d8ecd;
    iVar2 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))();
    if (iVar2 == -1) {
      uStack00000084 = 4;
    }
  }
  if (uStack00000084 != 0) {
    uStack00000084 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 4) | uStack00000084;
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) == 0) {
      uStack00000084 = uStack00000084 | 4;
    }
    uStack00000088 = 0;
    FUN_0054c6db();
  }
  return param_1;
}


