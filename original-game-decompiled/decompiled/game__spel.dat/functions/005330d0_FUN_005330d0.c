
/* ==== FUN_005330d0 @ 005330d0 ==== 
 * signature: undefined __cdecl FUN_005330d0(int * param_1, int * param_2, int param_3, int param_4, int param_5)
 * body: 005330d0-0053318f
 */

void __cdecl FUN_005330d0(int *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar2 = 0;
  pcVar3 = (code *)0x0;
  if (param_2 == (int *)0x19) {
    pcVar3 = FUN_00533be0;
  }
  else if (param_2 == (int *)0x9) {
    iVar2 = 1;
    pcVar3 = FUN_00533b20;
  }
  else if (param_2 == (int *)0xc) {
    iVar2 = 2;
    pcVar3 = FUN_00533b20;
  }
  else {
    FUN_00558953(DAT_0074c5ec,(byte *)s_qh_printvdiagram__unknown_print_f_005c531c);
    FUN_0051e8e0(1,(int *)0x0);
  }
  param_4 = (int)FUN_0052df80(param_5,in_stack_00000018,in_stack_0000001c,(uint *)&param_1,
                              (int *)&stack0x00000000);
  FUN_00533190(0,(undefined *)0x0,(int *)param_4,iVar2,0);
  iVar1 = param_3;
  FUN_00558953((int *)param_3,&DAT_005c3290);
  FUN_00533190(iVar1,pcVar3,(int *)param_4,iVar2,1);
  FUN_00514ba0(&param_4);
  return;
}


