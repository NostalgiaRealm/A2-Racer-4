
/* ==== FUN_004a256c @ 004a256c ==== 
 * signature: undefined FUN_004a256c(void)
 * body: 004a256c-004a25a5;004a2619-004a2629
 */

void FUN_004a256c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int extraout_ECX;
  undefined4 extraout_EDX;
  char cStack_c;
  undefined3 uStack_b;
  
  _cStack_c = CONCAT31((int3)((uint)param_3 >> 8),1);
  FUN_00403178(param_1,CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)((int)param_1 + 0x292)),
               &cStack_c);
  if (cStack_c != '\0') {
    switch(*(undefined1 *)((int)param_1 + 0x292)) {
    case 0:
      FUN_004a2c98(param_1);
      break;
    case 1:
      func_0x004a2f14(param_1);
      break;
    case 2:
      FUN_004a2e80(param_1,extraout_EDX,extraout_ECX);
      break;
    case 3:
      FUN_004a30a8(param_1);
      break;
    case 4:
      func_0x004a3238(param_1);
      break;
    case 5:
      func_0x004a33f4(param_1);
      break;
    case 6:
      func_0x004a34d0(param_1);
      break;
    case 7:
      func_0x004a2da8(param_1);
      break;
    case 8:
      func_0x004a3594(param_1);
    }
    FUN_004a262c(param_1,*(undefined1 *)((int)param_1 + 0x292));
  }
  return;
}


