
/* ==== FUN_0042ed1c @ 0042ed1c ==== 
 * signature: undefined __register FUN_0042ed1c(undefined4 param_1, char param_2)
 * body: 0042ed1c-0042edf4
 */

void FUN_0042ed1c(undefined4 param_1,char param_2)

{
  int iVar1;
  
  if ((PTR_DAT_00446da0[8] != '\0') && (param_2 != '\x03')) {
    if (param_2 == '\0') {
      FUN_0042ed00();
    }
    else {
      FUN_0042ed00();
      if (DAT_00446744 != 0) {
        iVar1 = (*DAT_00447784)();
        if (iVar1 != 0) {
          (*DAT_0044778c)();
          if (param_2 == '\x01') {
            (*DAT_00447794)();
          }
          else if (param_2 == '\x02') {
            (*DAT_00447794)();
          }
          else {
            (*DAT_00447794)();
            (*DAT_0044778c)();
          }
          (*DAT_00447790)();
          (*DAT_00447788)();
        }
      }
    }
  }
  return;
}


