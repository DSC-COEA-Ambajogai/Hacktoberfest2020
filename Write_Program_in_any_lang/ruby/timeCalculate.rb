def calc(proc)
    start=Time.now
    proc.call
    dur=Time.now-start
end
someProc=Proc.new do
    num=0
    100000.times do
        num+=1
    end

end
puts calc(someProc)