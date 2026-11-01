
/* ==== FUN_00442688 @ 00442688 ==== 
 * signature: undefined __register FUN_00442688(int param_1, char param_2)
 * body: 00442688-004426c6
 */

void FUN_00442688(int param_1,char param_2)

{
  int iVar1;
  undefined3 in_register_00000009;
  
  if (param_2 != *(char *)(param_1 + 0x78)) {
    *(char *)(param_1 + 0x78) = param_2;
    if (param_2 == '\0') {
      FUN_00402d14(*(int **)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
    else {
      iVar1 = (**(code **)(PTR_PTR_0044685c + 0x2c))
                        (PTR_PTR_0044685c,CONCAT31(in_register_00000009,1),param_1);
      *(int *)(param_1 + 0x74) = iVar1;
      TLabel_set_Color(iVar1,*(int *)(param_1 + 0x4c));
    }
  }
  return;
}


