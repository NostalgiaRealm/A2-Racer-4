
/* ==== FUN_00438ed0 @ 00438ed0 ==== 
 * signature: undefined __register FUN_00438ed0(undefined4 param_1, char param_2)
 * body: 00438ed0-00438fa8
 */

void FUN_00438ed0(undefined4 param_1,char param_2)

{
  int iVar1;
  
  if ((PTR_DAT_004aba14[8] != '\0') && (param_2 != '\x03')) {
    if (param_2 == '\0') {
      FUN_00438eb4();
    }
    else {
      FUN_00438eb4();
      if (DAT_004aa818 != 0) {
        iVar1 = (*DAT_004ac794)();
        if (iVar1 != 0) {
          (*DAT_004ac79c)();
          if (param_2 == '\x01') {
            (*DAT_004ac7a4)();
          }
          else if (param_2 == '\x02') {
            (*DAT_004ac7a4)();
          }
          else {
            (*DAT_004ac7a4)();
            (*DAT_004ac79c)();
          }
          (*DAT_004ac7a0)();
          (*DAT_004ac798)();
        }
      }
    }
  }
  return;
}


