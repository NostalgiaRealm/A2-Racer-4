
/* ==== FUN_00450890 @ 00450890 ==== 
 * signature: undefined __register FUN_00450890(char param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * body: 00450890-004508c4
 */

void FUN_00450890(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *(undefined4 *)(param_4 + -4) = 0x80000014;
  if (param_1 == '\x01') {
    *(undefined4 *)(param_4 + -4) = 0x80000010;
  }
  *(undefined4 *)(param_4 + -8) = 0x80000010;
  if (param_1 == '\x01') {
    *(undefined4 *)(param_4 + -8) = 0x80000014;
  }
  return;
}


