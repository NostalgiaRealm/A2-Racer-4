
/* ==== FUN_00450b00 @ 00450b00 ==== 
 * signature: undefined __cdecl FUN_00450b00(int param_1, char * param_2)
 * body: 00450b00-00450b2a
 */

void __cdecl FUN_00450b00(int param_1,char *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (char *)0x0) {
    uVar1 = FUN_0049ecb0(&DAT_006fbb5c,param_2);
    *(undefined4 *)(param_1 * 0xf0 + 0x30 + DAT_00715e50) = uVar1;
  }
  return;
}


