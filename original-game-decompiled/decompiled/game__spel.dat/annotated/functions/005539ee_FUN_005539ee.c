
/* ==== FUN_005539ee @ 005539ee ==== 
 * signature: undefined __fastcall FUN_005539ee(void * param_1)
 * body: 005539ee-00553a1d
 */

void __fastcall FUN_005539ee(void *param_1)

{
  short *psVar1;
  uint uVar2;
  
  psVar1 = *(short **)((int)param_1 + 4);
  if (((psVar1 != (short *)0x0) && (*(char *)((int)psVar1 + -1) != '\0')) &&
     (*(char *)((int)psVar1 + -1) != -1)) {
    FUN_00553734(param_1,'\x01');
    uVar2 = FUN_0055cf4d(psVar1);
    FUN_0055349f(param_1,psVar1,uVar2);
  }
  return;
}


