
/* ==== __break @ 10001000 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 10001000-10001000
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


