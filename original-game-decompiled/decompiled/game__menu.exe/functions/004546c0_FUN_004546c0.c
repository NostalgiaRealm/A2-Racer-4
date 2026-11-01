
/* ==== FUN_004546c0 @ 004546c0 ==== 
 * signature: undefined __register FUN_004546c0(int param_1, char * param_2, undefined2 * param_3)
 * body: 004546c0-00454736
 */

void FUN_004546c0(int param_1,char *param_2,undefined2 *param_3)

{
  char cVar1;
  char extraout_AH;
  char extraout_var;
  int iVar2;
  undefined2 *local_c;
  
  iVar2 = *(int *)(param_1 + 0x8c) + -1;
  local_c = param_3;
  if (-1 < iVar2) {
    do {
      FUN_00456a14(param_1);
      if (extraout_var == param_2[2]) {
        FUN_00456a14(param_1);
        if (extraout_AH != param_2[1]) goto LAB_0045470b;
        cVar1 = FUN_00456a14(param_1);
        if (cVar1 != *param_2) goto LAB_0045470b;
      }
      else {
LAB_0045470b:
        *local_c = *(undefined2 *)param_2;
        *(char *)(local_c + 1) = param_2[2];
        *(undefined1 *)((int)local_c + 3) = 0xff;
      }
      param_2 = param_2 + 3;
      local_c = local_c + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}


