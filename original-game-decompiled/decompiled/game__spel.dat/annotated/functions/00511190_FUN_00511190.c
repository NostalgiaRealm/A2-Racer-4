
/* ==== FUN_00511190 @ 00511190 ==== 
 * signature: float10 __fastcall FUN_00511190(int param_1)
 * body: 00511190-005111ee
 */

float10 __fastcall FUN_00511190(int param_1)

{
  double *pdVar1;
  double *pdVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  float10 fVar6;
  
  fVar6 = (float10)0.0;
  uVar5 = (uint)*(ushort *)(param_1 + 0x22);
  iVar3 = 0;
  if (uVar5 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x24);
    do {
      iVar3 = iVar3 + 1;
      pdVar1 = (double *)*puVar4;
      puVar4 = puVar4 + 1;
      pdVar2 = (double *)(*(undefined4 **)(param_1 + 0x24))[iVar3 % (int)uVar5];
      fVar6 = ((float10)*pdVar1 - (float10)*pdVar2) * ((float10)*pdVar1 - (float10)*pdVar2) +
              ((float10)pdVar1[1] - (float10)pdVar2[1]) * ((float10)pdVar1[1] - (float10)pdVar2[1])
              + ((float10)pdVar1[2] - (float10)pdVar2[2]) *
                ((float10)pdVar1[2] - (float10)pdVar2[2]) + fVar6;
    } while (iVar3 < (int)uVar5);
  }
  return fVar6;
}


