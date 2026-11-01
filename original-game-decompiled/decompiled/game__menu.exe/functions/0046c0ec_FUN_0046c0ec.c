
/* ==== FUN_0046c0ec @ 0046c0ec ==== 
 * signature: undefined __register FUN_0046c0ec(undefined4 * param_1, int * param_2)
 * body: 0046c0ec-0046c138
 */

void FUN_0046c0ec(undefined4 *param_1,int *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  
  FUN_00403cb0(param_2,param_1);
  pbVar1 = FUN_00408920((undefined *)*param_2);
  while( true ) {
    iVar3 = FUN_00403edc(*param_2);
    if ((iVar3 < 1) || ((0x20 < *pbVar1 && (*pbVar1 != 0x2e)))) break;
    puVar2 = FUN_004040a0((undefined *)*param_2);
    FUN_00404210(param_2,(int)pbVar1 - (int)puVar2);
    pbVar1 = FUN_00408920((undefined *)*param_2);
  }
  return;
}


