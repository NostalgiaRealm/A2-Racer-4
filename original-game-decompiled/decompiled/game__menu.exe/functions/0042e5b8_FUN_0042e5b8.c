
/* ==== FUN_0042e5b8 @ 0042e5b8 ==== 
 * signature: undefined __register FUN_0042e5b8(int * param_1, int * param_2)
 * body: 0042e5b8-0042e5fc
 */

void FUN_0042e5b8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_1c [8];
  int iStack_14;
  int iStack_10;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  (**(code **)(*param_1 + 0x40))(param_1,local_1c,*param_1,iVar1,iVar2);
  (**(code **)(*param_1 + 0x7c))
            (param_1,param_1[0xc],param_1[0xd],(param_1[0xf] - iStack_10) + iVar2,
             (param_1[0xe] - iStack_14) + iVar1);
  return;
}


