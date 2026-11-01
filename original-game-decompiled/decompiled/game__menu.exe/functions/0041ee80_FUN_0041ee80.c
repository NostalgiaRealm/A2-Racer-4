
/* ==== FUN_0041ee80 @ 0041ee80 ==== 
 * signature: undefined __register FUN_0041ee80(int * param_1, char param_2)
 * body: 0041ee80-0041eeab
 */

void FUN_0041ee80(int *param_1,char param_2)

{
  uint uVar1;
  
  if (param_2 != (char)param_1[0xc]) {
    if (param_2 == '\0') {
      FUN_0041ee30(param_1,0x20000000);
    }
    else {
      uVar1 = FUN_0041e000(param_1);
      FUN_0041ee30(param_1,uVar1);
    }
  }
  return;
}


