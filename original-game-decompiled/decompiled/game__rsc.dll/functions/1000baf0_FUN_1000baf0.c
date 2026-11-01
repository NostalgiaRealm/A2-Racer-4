
/* ==== FUN_1000baf0 @ 1000baf0 ==== 
 * signature: undefined __cdecl FUN_1000baf0(undefined4 * param_1)
 * body: 1000baf0-1000bbb6
 */

void __cdecl FUN_1000baf0(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 == (undefined4 *)0x0) &&
     (iVar2 = FUN_10003050(2,0x1002cee8,0x2e,0,(byte *)"str != NULL"), iVar2 == 1)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DAT_1003142c = DAT_1003142c + 1;
  uVar3 = FUN_10003710((void *)0x1000,2,0x1002cee8,0x3b);
  param_1[2] = uVar3;
  if (param_1[2] == 0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  *param_1 = param_1[2];
  param_1[1] = 0;
  return;
}


