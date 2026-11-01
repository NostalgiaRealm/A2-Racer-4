
/* ==== FUN_0040c7a0 @ 0040c7a0 ==== 
 * signature: undefined4 __register FUN_0040c7a0(byte * param_1, float10 * param_2, char param_3)
 * body: 0040c7a0-0040c84a
 */

undefined4 FUN_0040c7a0(byte *param_1,float10 *param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  undefined2 extraout_var;
  byte *extraout_ECX;
  byte *extraout_ECX_00;
  byte *pbVar3;
  int extraout_EDX;
  ushort in_FPUStatusWord;
  ushort uVar4;
  float10 fVar5;
  
  uVar4 = (in_FPUStatusWord >> 8 & 0x7f) << 8;
  fVar5 = (float10)0;
  FUN_0040c84b();
  bVar1 = *param_1;
  if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
    param_1 = param_1 + 1;
  }
  FUN_0040c856();
  pbVar3 = extraout_ECX;
  if (*param_1 == DAT_004474f3) {
    param_1 = param_1 + 1;
    FUN_0040c856();
    pbVar3 = extraout_ECX_00;
  }
  if (pbVar3 != param_1) {
    if ((*param_1 & 0xdf) == 0x45) {
      param_1 = param_1 + 1;
      FUN_0040c872();
    }
    FUN_0040c84b();
    if (*param_1 == 0) {
      iVar2 = extraout_EDX;
      if (param_3 == '\x01') {
        iVar2 = extraout_EDX + 4;
      }
      FUN_00405870(iVar2);
      if (bVar1 == 0x2d) {
        fVar5 = -fVar5;
      }
      if (param_3 == '\0') {
        *param_2 = fVar5;
      }
      else {
        *(longlong *)param_2 = (longlong)ROUND(fVar5);
      }
      if ((uVar4 & 9) == 0) {
        return CONCAT31((int3)(CONCAT22(extraout_var,uVar4) >> 8),1);
      }
    }
  }
  return 0;
}


