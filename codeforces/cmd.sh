for((i = 101845;i<=102379; ++i)); do
    echo $i
    cf pull ac $i
    # sleep 5
done
