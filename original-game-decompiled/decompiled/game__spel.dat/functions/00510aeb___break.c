
/* ==== __break @ 00510aeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00510aeb-00510aeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


