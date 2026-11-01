
/* ==== FUN_10005530 @ 10005530 ==== 
 * signature: undefined4 __stdcall FUN_10005530(void)
 * body: 10005530-100055a3
 */

undefined4 FUN_10005530(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  int local_24;
  
  FUN_10004eb0(local_38);
  if (((local_24 == 0) && (local_30 == 0)) && (((DAT_1002fce0 & 0x10) == 0 || (local_2c == 0)))) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_10003050(0,0,0,0,&DAT_1002c46c);
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    FUN_10005150((undefined4 *)0x0);
    uVar3 = 1;
  }
  return uVar3;
}


