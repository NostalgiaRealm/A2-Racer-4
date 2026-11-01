
/* ==== FUN_004390d0 @ 004390d0 ==== 
 * signature: undefined __cdecl FUN_004390d0(undefined4 param_1)
 * body: 004390d0-004396d5
 */

void __cdecl FUN_004390d0(undefined4 param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  
  DAT_00599c80 = param_1;
  switch(param_1) {
  case 0:
    local_14 = 0x41f00000;
    local_10 = 0xc2a00000;
    break;
  case 1:
    FUN_004b1190((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41c80000,0xc2520000)
    ;
    change_active_camera(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
    FUN_004b1290((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
    FUN_004b1110((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),DAT_006c3578,DAT_006c357c,
                 DAT_006c3580);
    goto LAB_00439508;
  case 2:
    local_14 = 0x42180000;
    local_10 = 0xc25c0000;
    break;
  case 3:
    FUN_004b1210((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),0,0x41780000,0x41400000);
    change_active_camera(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 1;
    FUN_004b1310(DAT_00719b50 + DAT_006c3518 * 0x178);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 0;
    FUN_004b1150(DAT_00719b50 + DAT_006c3518 * 0x178);
    goto LAB_00439508;
  case 4:
    FUN_004b1210((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),0,0x41a00000,0x42960000);
    change_active_camera(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
    FUN_004b1290((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
    goto LAB_00439508;
  case 5:
  case 6:
  case 7:
  case 9:
    FUN_004b1210((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),0,0x41d00000,0xc2040000);
    goto LAB_004395ea;
  case 8:
  case 0xb:
    local_14 = 0x41d00000;
    local_10 = 0xc2040000;
    goto LAB_0043959f;
  case 10:
    local_14 = 0x42040000;
    local_10 = 0xc2040000;
    goto LAB_0043959f;
  case 0xc:
    local_14 = 0x42200000;
    local_10 = 0xc2200000;
LAB_0043959f:
    FUN_004b1190((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,local_14,local_10);
LAB_004395ea:
    change_active_camera(0);
    *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
    FUN_004b1290((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
                 *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
    *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
    FUN_004b1110((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),DAT_006c3578,DAT_006c357c,
                 DAT_006c3580);
    *(undefined4 *)(DAT_00719b50 + DAT_006c3518 * 0x178) = 1;
    return;
  case 0xd:
    local_14 = 0x42340000;
    local_10 = 0xc25c0000;
    break;
  case 0xe:
    FUN_004397f0();
  default:
    return;
  }
  FUN_004b1210((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),0,local_14,local_10);
  change_active_camera(0);
  *(undefined4 *)(DAT_00719b50 + 0x80 + DAT_006c3518 * 0x178) = 0;
  FUN_004b1290((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),
               *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x24 + DAT_00715e50),0,0x41200000,0);
  *(undefined4 *)(DAT_00599c84 * 0xf0 + 0x54 + DAT_00715e50) = 1;
  FUN_004b1110((void *)(DAT_00719b50 + DAT_006c3518 * 0x178),DAT_006c3578,DAT_006c357c,DAT_006c3580)
  ;
LAB_00439508:
  *(undefined4 *)(DAT_00719b50 + DAT_006c3518 * 0x178) = 0xffffffff;
  return;
}


