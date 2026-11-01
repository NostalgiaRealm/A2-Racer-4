
/* ==== FUN_005596c8 @ 005596c8 ==== 
 * signature: float10 __thiscall FUN_005596c8(undefined * param_1, byte * param_2)
 * body: 005596c8-00559714
 */

float10 __thiscall FUN_005596c8(undefined *param_1,byte *param_2)

{
  uint uVar1;
  byte *this;
  undefined *puVar2;
  
  while( true ) {
    if (DAT_005c8378 < 2) {
      uVar1 = (byte)PTR_DAT_005c8384[(uint)*param_2 * 2] & 8;
      param_1 = PTR_DAT_005c8384;
    }
    else {
      puVar2 = (undefined *)0x8;
      uVar1 = FUN_0055c336(param_1,(uint)*param_2,8);
      param_1 = puVar2;
    }
    if (uVar1 == 0) break;
    param_2 = param_2 + 1;
  }
  this = param_2;
  _strlen((char *)param_2);
  puVar2 = FUN_00561206(this,param_2);
  return (float10)*(double *)(puVar2 + 0x10);
}


