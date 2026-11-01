
/* ==== FUN_0044d814 @ 0044d814 ==== 
 * signature: undefined __register FUN_0044d814(int param_1, char param_2)
 * body: 0044d814-0044d852
 */

void FUN_0044d814(int param_1,char param_2)

{
  int iVar1;
  undefined3 in_register_00000009;
  
  if (param_2 != *(char *)(param_1 + 0x78)) {
    *(char *)(param_1 + 0x78) = param_2;
    if (param_2 == '\0') {
      FUN_00402f9c(*(int **)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      iVar1 = (**(code **)(PTR_PTR_004aa930 + 0x2c))
                        (PTR_PTR_004aa930,CONCAT31(in_register_00000009,1),param_1);
      *(int *)(param_1 + 0x74) = iVar1;
      TGroupBox_set_Color(iVar1,*(int *)(param_1 + 0x4c));
    }
  }
  return;
}


